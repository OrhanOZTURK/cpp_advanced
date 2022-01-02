#include<iostream>
#include<variant>
#include<utility>
#include<algorithm>
#include<vector>

using namespace std;
class Cat {
public:
	Cat(std::string name) : m_name{ std::move(name) } { }
	void meow()
	{
		std::cout << m_name << " miyavliyor\n";
	}
private:
	std::string m_name;
};
class Dog {
public:
	Dog(std::string name) : m_name{ std::move(name) } { }
	void bark()
	{
		std::cout << m_name << " havliyor\n";
	}
private:
	std::string m_name;
};
class Lamb {
public:
	Lamb(std::string name) : m_name{ std::move(name) } { }
	void bleat()
	{
		std::cout << m_name << " me'liyor\n";
	}
private:
	std::string m_name;
};
using Animal = std::variant<Dog, Cat, Lamb>;
// HOLDS ALTERNATIVE I TEMPLATE HALE GETIRDIK.
template <typename T>
bool is_type(const Animal& a)
{
	return std::holds_alternative<T>(a);
}
//VISITER OLUŞTURALIM
struct AnimalVoice {
	void operator()(Dog& dog)const {
		dog.bark();
	}
	void operator()(Cat& cat)const {
		cat.meow();
	}
	void operator()(Lamb& lamb)const {
		lamb.bleat();
	}
};
int main()
{
	vector<Animal> avec{ Cat{"pamuk"},Dog{"soko"}, Lamb{"kuzucuk"},Dog{"Kont"}, Lamb{"minnak"}, Dog{"lili"} };
	//switch case ile yaptık aslında Visit bunu kendi içinde yapıyor.
	for (Animal& a : avec)
	{
		switch (a.index()) // variantın index functionu bu
		{
		case 0: get<Dog>(a).bark(); break; //  get<0> da yazılabilirdi
		case 1: get<Cat>(a).meow(); break; //
		case 2: get<Lamb>(a).bleat(); break; //
		}
	}
	std::cout << "\n*********************************************************\n";
	//GET_IF İLE YAPIYORUZ.
	for (Animal& a : avec)
	{
		if (auto dog_ptr = get_if<Dog>(&a)) //girmezse nullptr olacak dog_ptr
		{
			dog_ptr->bark();
		}
		else if (auto cat_ptr = get_if<Cat>(&a)) //girmezse nullptr olacak
		{
			cat_ptr->meow();
		}
		else if (auto lamb_ptr = get_if<Lamb>(&a)) //girmezse nullptr olacak
		{
			lamb_ptr->bleat();
		}
	}
	std::cout << "\n*********************************************************\n";
	for (Animal& a : avec)
	{
		visit(AnimalVoice{}, a);
	}
	std::cout << "\n*********************************************************\n";
	std::cout << count_if(begin(avec), end(avec), is_type<Dog>) << " tane kopek var\n"; // is type ı yukarılarda tanımlamıştık
	std::cout << count_if(begin(avec), end(avec), is_type<Lamb>) << " tane kuzu var\n";
	std::cout << count_if(begin(avec), end(avec), is_type<Cat>) << " tane kedi var\n";
	std::cout << "\n*********************************************************\n";
}



OUTPUT
------
pamuk miyavliyor
soko havliyor
kuzucuk me'liyor
Kont havliyor
minnak me'liyor
lili havliyor

*********************************************************
pamuk miyavliyor
soko havliyor
kuzucuk me'liyor
Kont havliyor
minnak me'liyor
lili havliyor

*********************************************************
pamuk miyavliyor
soko havliyor
kuzucuk me'liyor
Kont havliyor
minnak me'liyor
lili havliyor

*********************************************************
3 tane kopek var
2 tane kuzu var
1 tane kedi var

*********************************************************

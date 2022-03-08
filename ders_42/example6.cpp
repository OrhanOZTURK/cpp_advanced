#include <iostream>
#include <string>

template <typename OutputPolicy, typename LanguagePolicy>
class HelloWorld : private OutputPolicy, private LanguagePolicy
{
public:
	//behavior method
	void run()const
	{
		OutputPolicy::print(LanguagePolicy::get_message());
	}
private:
};

class CoutOutputPolicy {
protected:
	template<typename T>
	void print(T&& x)const
	{
		std::cout << x << '\n';
	}
};

class EnglishLanguagePolicy
{
public:
	std::string get_message()const
	{
		return "Hello World!";
	}
};

class TurkishLanguagePolicy
{
public:
	std::string get_message()const
	{
		return "Merhaba Dunya!";
	}
};

class GermanLanguagePolicy
{
public:
	std::string get_message()const
	{
		return "Halo Welt!";
	}
};

using English = HelloWorld<CoutOutputPolicy, EnglishLanguagePolicy>;
using Turkish = HelloWorld<CoutOutputPolicy, TurkishLanguagePolicy>;
using German = HelloWorld<CoutOutputPolicy, GermanLanguagePolicy>;

int main()
{
	English e;
	German g;
	Turkish t;
	e.run();
	g.run();
	t.run();
}

OUTPUT
------
Hello World!
Halo Welt!
Merhaba Dunya!

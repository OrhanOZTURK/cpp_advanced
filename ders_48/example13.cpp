#include <iostream>
#include <thread>

class Myclass
{
public:
	Myclass() = default;
	Myclass(const Myclass&)
	{
		std::cout << "Copy Ctor\n";
	}
	Myclass(Myclass&&)
	{
		std::cout << "Move Ctor\n";
	}
};

void func(const Myclass&)
{

}

void foo(Myclass&&)
{

}

int main()
{
	using namespace std;
	Myclass m;
	Myclass n;
	thread tx{ func,m }; // Copy Ctor çağrıldı

	thread ty{ func,ref(m) }; // Copy veya Move Ctor çağrılmadı
	thread tz{ foo,std::move(m) }; // Move Ctor çağrıldı
	tx.join();
	ty.join();
	tz.join();
}

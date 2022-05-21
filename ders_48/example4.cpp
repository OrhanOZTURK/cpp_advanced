#include <thread>
#include <iostream>

int main()
{
	using namespace std;
	thread tx;	
	try {
		tx.join(); // exception throw
	}
	catch (const std::exception& ex)
	{
		std::cout << "exception cauhgt : " << ex.what() << '\n';
	}
}

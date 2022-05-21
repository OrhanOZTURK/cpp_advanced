#include <iostream>
#include <mutex>
#include <chrono>

std::mutex m1;
std::timed_mutex m2;

int main()
{
	using namespace std;
	using namespace std::literals;
	
	m1.lock();   
	
	m1.try_lock();
	
	m1.unlock();  

	//------------------------------------------------------------------------------------------
	
	m2.lock();
	
	m2.try_lock_for(1000ms);

	m2.try_lock_until(std::chrono::steady_clock::now() + 1000ms);

	m2.unlock();

}

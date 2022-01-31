#pragma once

class Singleton {
public:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	~Singleton();
	static Singleton& get_instance();
	void foo();
private:
	static Singleton instance; 
	
	Singleton();
};

#pragma once

class Singleton {
public:
	static Singleton& get_instance();
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	void foo();
private:
	Singleton();
};

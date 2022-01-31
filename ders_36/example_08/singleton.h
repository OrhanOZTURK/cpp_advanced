#pragma once


class Singleton {
public:
	void foo();
	static Singleton& instance();
	Singleton(const Singleton&) = delete;
	Singleton operator=(const Singleton&) = delete;
private:
	Singleton();
	inline static Singleton* mp_instance{};
};

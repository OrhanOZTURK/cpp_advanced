#pragma once

class Singleton {
	Singleton();
	void foo_impl();
	inline static Singleton* p_instance{};
public:
	static void foo(); 
};

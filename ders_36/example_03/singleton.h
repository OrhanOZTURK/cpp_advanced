#pragma once

class Singleton {
public:
	Singleton(const Singleton&) = delete;	
	Singleton& operator=(const Singleton&) = delete;
	void foo()
	{
		//...
	}
	static Singleton& instance()
	{
		if (!p_instance)
		{
			p_instance = new Singleton;
		}
		return *p_instance;
	}
private:
	Singleton() = default;
	inline static Singleton* p_instance{}; 
};

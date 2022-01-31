#pragma once


class TSingleton {
public:
	void foo();
	static TSingleton& instance();
	TSingleton(const TSingleton&) = delete;
	TSingleton operator=(const TSingleton&) = delete;
private:
	TSingleton();
	inline static TSingleton* mp_instance{};
};

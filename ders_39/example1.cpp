#include <iostream>
#include <utility>

template <typename Func>
class scope_guard {
public:
	scope_guard(Func f)noexcept : m_f(f) { }
	~scope_guard()
	{
		if (m_call_flag)
			m_f();
	}
	scope_guard(const scope_guard&& other) noexcept
		: m_f{ std::move(other.mf) }, m_call_flag{ other.m_call_flag }
	{
		other.m_call_flag = false;
	}
	void release()noexcept
	{
		m_call_flag = false;
	}
	scope_guard(const scope_guard&) = delete;
	scope_guard& operator=(const scope_guard&) = delete;
private:
	Func m_f;
	bool m_call_flag{ true };
};							


template <class Func>
scope_guard<Func>finally(const Func& f)
{
	return scope_guard<Func>{f};
}

int main()
{
	std::cout << "1...\n";
	auto f = [] { std::cout << "deneme\n"; };

	{
		//scope_guard<decltype(f)>sg{f}; //valid
		
		scope_guard sg{ f }; // Ctad
	}

	std::cout << "2...\n";
}


OUTPUT
------
1...
deneme
2...

#include <iostream>

template<typename T>
class ScopedPtr
{
public:
	explicit ScopedPtr(T* p = nullptr) : m_p{ p } { }
	~ScopedPtr()
	{
		delete m_p;
	}
	T* operator->()
	{
		return m_p;
	}

	const T* operator->()const
	{
		return m_p;
	}
	T* release()
	{
		return std::exchange(m_p, nullptr);
	}
	T& operator*()
	{
		return *m_p;
	}

	const T& operator*()const
	{
		return *m_p;
	}
private:
	T* m_p;
	ScopedPtr(const ScopedPtr&) = delete;
	ScopedPtr& operator=(const ScopedPtr&) = delete;
};


class Nec
{
public:
	Nec(int ival = 0);
	~Nec();
	void set(int ival)
	{
		m_val = ival;
	}

	int get()const
	{
		return m_val;
	}
	friend std::ostream& operator<<(std::ostream& os, const Nec& other);
private:
	int m_val;
};


Nec::Nec(int val) : m_val{ val }
{
	std::cout << m_val << " degerinde sinif nesnesi olusturuldu\n";
}
Nec::~Nec()
{
	std::cout << m_val << " degerinde Nec nesnesi yok edildi\n";
}
std::ostream& operator<<(std::ostream& os, const Nec& nec)
{
	return os << "(" << nec.m_val << ")\n";
}

void func()
{
	ScopedPtr sptr{ new Nec{23} };
}

int main()
{
	std::cout << "main basladi\n";
	func();
	std::cout << "main devam ediyor\n";
}

OUTPUT
------
main basladi
23 degerinde sinif nesnesi olusturuldu
23 degerinde Nec nesnesi yok edildi
main devam ediyor

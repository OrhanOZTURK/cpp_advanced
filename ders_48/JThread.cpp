class JThread
{
public:
	JThread()noexcept = default;

	template<typename Func, typename ...Args>
	explicit JThread(Func&& f, Args &&...args) : m_t(std::forward<Func>(f), std::forward<Args>(args)...)
	{
		
	}

	explicit JThread(std::thread t)noexcept : m_t(std::move(t)) { }
	
	JThread(JThread&& other)noexcept : m_t(std::move(other.m_t)) { }

	bool joinable()const noexcept
	{
		return m_t.joinable();
	}

	~JThread()
	{
		if(joinable())
		{
			join();
		}
	}

	void join()
	{
		m_t.join();
	}

	void swap(JThread&other)noexcept
	{
		m_t.swap(other.m_t);
	}

	JThread& operator=(JThread&& other)
	{
		if(joinable())
			join();

		m_t = std::move(other.m_t);

		return *this;
	}

private:
	std::thread m_t;
};

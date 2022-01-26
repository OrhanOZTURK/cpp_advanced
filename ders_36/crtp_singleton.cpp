#pragma once
#include <memory>
#include <mutex>

template<typename Derived>
class Singleton
{
    static std::unique_ptr<Derived> m_instance;
    static std::once_flag           m_once;
protected:
    Singleton() = default;
public:
    ~Singleton()
    {
        //...
    }
    static Derived& get_instance()
    {
        std::call_once
        (
            Singleton::m_once,
            []() { Singleton::m_instance.reset(new Derived()); }
        );
        return *m_instance;
    }
};

template<typename Derived>
std::unique_ptr<Derived>  Singleton<Derived>::m_instance;

template<typename Derived>
std::once_flag   Singleton<Derived>::m_once;

#include <compare>

struct T {
    auto operator<=>(const T&)const = default;
};

struct U {
    auto operator<=>(const U&)const = default;
};

struct V {
    auto operator<=>(const V&)const = default;
};

struct Nec {
    T t;
    U u;
    V v;

    bool operator==(Nec const& rhs) const 
    {
        return t == rhs.t &&
               u == rhs.u &&
               v == rhs.v;
    }

    auto operator<=> (const Nec& rhs) const 
    {
        if (auto c = t <=> rhs.t; c != 0) 
            return c;
        
        if (auto c = u <=> rhs.u; c != 0) 
            return c;

        return v <=> rhs.v;
    }
};

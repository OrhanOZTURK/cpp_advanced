struct T {
    bool operator<(const T&)const;
    bool operator==(const T&)const;
};

struct U{
    bool operator<(const U&)const;
    bool operator==(const U&)const;
};

struct V {
    bool operator<(const V&)const;
    bool operator==(const V&)const;
};

struct A {
    T t;
    U u;
    V v;

    bool operator==(A const& rhs) const {
        return t == rhs.t &&
            u == rhs.u &&
            v == rhs.v;
    }

    bool operator!=(A const& rhs) const {
        return !(*this == rhs);
    }

    bool operator< (const A& rhs) const {
        if (t < rhs.t) return true;
        if (rhs.t < t) return false;
        if (u < rhs.u) return true;
        if (rhs.u < u) return false;
        return v < rhs.v;
    }

    bool operator> (const A& rhs) const 
    {
        return rhs < *this;
    }

    bool operator<=(const A& rhs) const 
    {
        return !(rhs < *this);
    }

    bool operator>=(const A& rhs) const 
    {
        return !(*this < rhs);
    }
};

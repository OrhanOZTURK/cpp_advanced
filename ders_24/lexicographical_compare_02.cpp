struct T {
    bool operator<(const T&)const;
    bool operator==(const T&)const;
};

struct U {
    bool operator<(const U&)const;
    bool operator==(const U&)const;
};

struct V {
    bool operator<(const V&)const;
    bool operator==(const V&)const;
};

struct Nec {
    T t;
    U u;
    V v;

    bool operator==(Nec const& rhs) const {
        return t == rhs.t &&
            u == rhs.u &&
            v == rhs.v;
    }

    bool operator!=(Nec const& rhs) const {
        return !(*this == rhs);
    }

    bool operator< (const Nec& rhs) const {
        if (t < rhs.t) return true;
        if (rhs.t < t) return false;
        if (u < rhs.u) return true;
        if (rhs.u < u) return false;
        return v < rhs.v;
    }

    bool operator> (const Nec& rhs) const
    {
        return rhs < *this;
    }

    bool operator<=(const Nec& rhs) const
    {
        return !(rhs < *this);
    }

    bool operator>=(const Nec& rhs) const
    {
        return !(*this < rhs);
    }
};

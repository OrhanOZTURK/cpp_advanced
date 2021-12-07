
struct T {
    //...
    bool operator==(const T&)const;
    bool operator<(const T&)const;
};

struct U {
    //...
    bool operator==(const U&)const;
    bool operator<(const U&)const;
};

struct Nec {
    T t;
    U u;
    bool operator==(const Nec& other)
    {
        return t == other.t && u == other.u;
    }

    bool operator==(const Nec& other)
    {
        if (t < other.t)
            return true;

        if (other.t < t)
            return false;

        return u < other.u;
    }
};

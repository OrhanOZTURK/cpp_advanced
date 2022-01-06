#include <concepts>
#include <iostream>

template<typename T>
concept nec = requires{
    std::integral<T>;
};

int main()
{
    static_assert(nec<double>); //Fail değil.Çünkü burada kontrol edilen ifadenin doğruluğu değil
                                // sentaks hatası veriyor mu vermiyor mu konusu
}

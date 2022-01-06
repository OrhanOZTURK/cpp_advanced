#include <concepts>
#include <iostream>
#include <memory>

template <typename T>
concept nec = requires(T p)
{
    p == nullptr; // UNEVALUATED EXPRESSION.IFADENIN KENDİSİ GEÇERLİ OLMALI.TRUE FALSE OLMASI ÖNEMSİZ
};

int main() {

    static_assert(nec<int *>); // GEÇERLİ
    static_assert(nec<std::unique_ptr<int>>);  //GEÇERLİ

    static_assert(nec<std::optional<int>>);  //GEÇERSİZ
    static_assert(nec<std::optional<int *>>);  // GEÇERSİZ
}

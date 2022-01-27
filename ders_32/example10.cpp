#include<map>
#include<ranges>
#include<iostream>
#include"nutility.h"
#include<string>
#include<utility>

int main()
{
    using namespace std;

    map<string,int> simap;
    rfill(simap,20,[]{ return pair{rname() + ' ' + rfname(), Irand{0,10'000}() };} );

    print(simap,"\n");

    auto v1 = simap  | views::filter([](const auto &s){ return s.first.length() > 12; })
                     | views::take(3)
                     | views::keys;

    for(const auto &elem : v1)
        std::cout << elem << '\n';

    std::cout << "---------------------------------------------------\n";

    auto v2 = simap | views::filter([](const auto &s){ return s.first.length() > 12; })
                    | views::take(3)
                    | views::values;

    for(const auto &elem : v2) {
        std::cout << elem << '\n';
    }

    std::cout << "---------------------------------------------------\n";

    auto v3 = simap | views::filter([](const auto &s){ return s.first.length() > 12; })
                    | views::take(3)
                    | views::elements<0>;

                 for(const auto &elem : v3)
    std::cout << elem << '\n';
}

//umut kotankıran tarafından aktarıldı

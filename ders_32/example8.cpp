#include<ranges>
#include<vector>
#include<iostream>


int main()
{
    using namespace std;

    auto f{[](int x){ return x * 10; }};
    //views::iota(1,30);   //Valid syntax
    //constexpr auto v = ranges::transform_view{ranges::reverse_view {ranges::iota_view{1,30}},f}; //Valid syntax
    //ranges::transform_view a{ ranges::reverse_view {ranges::iota_view{1,30}},f }; //Valid syntax
    constexpr auto v = views::iota(1,30) | views::transform(f);

    vector<int> ivec{v.begin(), v.end()};

    for(auto val : ivec)
    {
        cout << val << ' ';
    }
}
//umut kotankıran tarafından aktarıldı

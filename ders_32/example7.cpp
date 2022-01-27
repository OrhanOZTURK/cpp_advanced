#include<ranges>
#include<vector>
#include<iostream>
#include<functional>


template<std::ranges::input_range Rng, typename Projection = std::identity>
std::ranges::range_value_t<Rng> gmax(Rng &&rg, Projection proj = {})
{
    if(std::ranges::empty(rg))
    {
        return std::ranges::range_value_t<Rng>{};
    }
    auto pos = std::ranges::begin(rg);
    auto max_iter = pos;
    while(++pos != std::ranges::end(rg))
    {
        if(std::invoke(proj,*pos) > std::invoke(proj,*max_iter))
            max_iter = pos;
    }
    return *max_iter;
}

int main()
{
    using namespace std;

    vector ivec{2,-4,8,17,-90,40,34,13,4};
    auto val = gmax(ivec);
    cout << "val = " << val << '\n'; // 40

    //-----------------------------------------------------------------------

    vector ivec2{2,-4,8,17,-90,40,34,13,4};
    auto val2 = gmax(ivec2, [](int x){ return abs(x);});
    cout << "val = " << val2 << '\n';  // -90

}

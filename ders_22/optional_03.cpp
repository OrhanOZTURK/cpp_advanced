#include <iostream>
#include <algorithm>
#include <optional>
#include <vector>

template <typename Con, typename Pred>
auto find_if(Con&& c, Pred&& pred) 
{
	using std::begin, std::end; 
					
	auto beg_iter = begin(c), end_iter = end(c);
	auto result = std::find_if(beg_iter, end_iter, pred);
	using iterator = decltype(result); 

	if (result == end_iter) 
	{
		return std::optional<iterator>(); 
	}

	return std::optional<iterator>(result);
}

template <typename Con, typename T>
auto find(Con&& c, const T& val)
{
	return find_if(std::forward<Con>(c), [&val](auto&& x) {return x == val; });
}

int main()
{
	using namespace std;
	vector<int> ivec{ 1,3,7,10,15,122 };
	
	if (auto op = find_if(ivec, [](int x) { return x % 2 == 0; }))
	{
		cout << "bulunan sayi = " << **op << '\n';
		cout << "index = " << std::distance(ivec.begin(), *op) << '\n';
	}
}

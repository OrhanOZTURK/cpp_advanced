#include <vector>
#include <iostream>

template<typename T, typename... Args>
void pushback_left(std::vector<T>&v, Args&& ...args)
{
    (v.push_back(std::forward<Args>(args)), ...); // unary right fold
}

template<typename T, typename... Args>
void pushback_right(std::vector<T>& v, Args&& ...args) //unary left fold
{
    (... , v.push_back(std::forward<Args>(args)));
}
int main()
{
    std::vector<int> vec;

    //pushback_left(vec, 2, 3, 5, 7, 11, 13); // 2 3 5 7 11 13

    pushback_right(vec, 2, 3, 5, 7, 11, 13); //  2 3 5 7 11 13 .Virgül operatorü olduğu için değişen birşey yok.
   
    for (auto i : vec)
        std::cout << i << "\n"; // 2 3 5 7 11 13
}

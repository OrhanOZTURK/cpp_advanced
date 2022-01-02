#include<iostream>
#include<variant>

int main()
{
  std::variant<int,double> vx;
  std::variant<char,float> vx;
  vx = vy; // Syntax Error. Different variant object
}

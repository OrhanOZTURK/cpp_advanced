template<std::convertible_to<int> T>
class Myclass
{
	
};


int main()
{
	Myclass<double> x; //Valid
}

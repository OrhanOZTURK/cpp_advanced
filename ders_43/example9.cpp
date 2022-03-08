template<typename T, typename U>
class Nec {
};

template<typename T, typename U, template<typename, typename> typename C>
class Myclass {
public:
	Myclass()
	{
		std::cout << typeid(C).name() << '\n';
		std::cout << typeid(C<T, U>).name() << '\n';
	}
};

int main()
{
	Myclass<double, int, Nec>m;
}

OUTPUT
------
class Nec
class Nec<double, int>

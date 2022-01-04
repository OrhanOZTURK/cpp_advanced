struct Data {
public:
	Data(Data&&) noexcept(false);
};

class Myclass {
public:
	Myclass(Myclass&&) = default;
private:
	Data x;
};

int main()
{
	static_assert(std::is_nothrow_move_constructible_v<Myclass>); //Error
}

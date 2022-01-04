class Myclass {
public:
	Myclass(Myclass&&) = default;
};

int main()
{
	static_assert(std::is_nothrow_move_constructible_v<Myclass>); // Ctor noexcept
}

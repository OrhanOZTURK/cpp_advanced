#include <iostream>
#include <format>
#include <array>

int main()
{
	using namespace std;

	std::array<char, 10> ar{};

	format_to_n(ar.data(), ar.size() - 1, "{} {}", "Necati", "Ergin");

	cout << "ar.data() : " << ar.data() << '\n'; // Necati Er
}

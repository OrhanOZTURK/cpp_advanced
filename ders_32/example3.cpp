template<std::integral auto x>
class Myclass{
};

int main()
{
	Myclass<5.5> x; // Error
	Myclass<10> y; // Valid
}
//umut kotankıran tarafından aktarıldı

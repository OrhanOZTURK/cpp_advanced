int main()
{
	std::cout << format("{}\n", 10 > 5); // true
	std::cout << format("{:d}\n", 10 > 5); // 1
	std::cout << format("{}\n", 65); // 65
	std::cout << format("{:c}\n", 65); // A
	std::cout << format("{}\n", 'A'); // A
	string name {"murat hepeyiler"};
	cout << format("|{}|", name) << '\n'; // murat hepeyiler
	----------------------------------------------------------------------------------------------
	string name {"murat hepeyiler"};
	std::cout << format("{}",name); // murat hepeyiler
	std:cout << format("|{:24s}|",name) << "\n"; // |murat hepeyiler		|   Default alignment sola dayalı
	std:cout << format("|{:<24s}|",name) << "\n"; // |murat hepeyiler		|
	std:cout << format("|{:>24s}|",name) << "\n"; // |	 murat hepeyiler|
	std:cout << format("|{:^24s}|",name) << "\n"; // |   murat hepeyiler   |
	std:cout << format("|{:.^24s}|",name) << "\n"; // |.....murat hepeyiler.....|
	std:cout << format("|{:<24.5s}|",name) << "\n"; // |murat				|
	std:cout << format("|{:+>24.5s}|",name) << "\n"; // |+++++++++++++murat|
	std:cout << format("|{:!^24.5s}|",name) << "\n"; // |!!!!!!murat!!!!!!|
	----------------------------------------------------------------------------------------------
	std::ostream formatlamasından bir farklılık daha var
	int x{};
	std::cout << &x << "\n"; // burada void* parametreli func çağrılır
	
	std::cout << format("{}",&x) << "\n"; // Sentaks hatası. Eşlenen ifadenin void* türünden olması gerekiyor
	std::cout << format("{:p}", &x) << "\n"; //Sentaks hatası yine
	std::cout << format("{}",(void*)&x) << "\n"; // Geçerli artık
	std::cout << format("{:p}",(void*)&x) << "\n"; // Yine geçerli artık
	std::cout << format("{:p}", static_cast<void *>(&x)) << "\n";  // Dikkat !!! {:p} var
	
	std::cout << format("{}", nullptr) << "\n"; // 0x0
	std::cout << format("{:p}", nullptr) << "\n"; // 0x0
	----------------------------------------------------------------------------------------------
	
	#'E BAKALIM
	Tamsayılarda sayı sistemi tabanını yazmaya zorluyor.
	std::cout << format("{:x}",47802) << '\n'; // baba 
	std::cout << format("{:X}",47802) << '\n'; // BABA
	std::cout << format("{:#x}",47802) << '\n'; // 0xbaba
	std::cout << format("{:#X}",47802) << '\n'; // 0XBABA
	std::cout << format("{:b}",47802) << '\n'; // 10111010100..0
	std::cout << format("{:#b}",47802) << '\n'; // 0b10111010100..0
	std::cout << format("{:o}",47802) << '\n'; // 135272
	std::cout << format("{:#o}",47802) << '\n'; // 0135272
	std::cout << format("{:f}",5.) << '\n'; //
	std::cout << format("{:#f}",5.) << '\n'; // 
	----------------------------------------------------------------------------------------------
	Nested PlaceHolder Örneği
	double dval = 3. / 7;
	int width = 12;
	int precision = 5;
	std::cout << format("|{2:<{0}.{1}f}|",width,prec,dval);    //  |			0.42857|
}

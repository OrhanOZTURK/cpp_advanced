#include<iostream>
#include<string>
#include<optional>

class UserRecord
{
public:
	UserRecord(std::string name, std::optional<std::string> nick, std::optional<int> age) :
		m_name(std::move(name)), m_nick(nick), m_age(age) { }
	friend std::ostream& operator<<(std::ostream& os, const UserRecord& user)
	{
		os << user.m_name << ' ';
		if (user.m_nick)
		{
			os << *user.m_nick << ' ';
		}
		if (user.m_age)
		{
			os << *user.m_age << " yasinda";
		}
		return os;
	}
private:
	std::string m_name;
	std::optional<std::string> m_nick;
	std::optional<int> m_age;
};

int main()
{
	UserRecord urx = { "Salih Korkusuz", "Salih",40 };
	std::cout << urx << "\n";
	UserRecord ury = { "Necati Ergin", std::nullopt,std::nullopt };
	std::cout << ury << "\n";
}

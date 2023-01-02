# include <iostream>
# include <string>
# include <string.h>

using namespace std;
using string = std::string;

class	Contact
{
	private:

	public:
		
};

class	Account
{
	public:
		Account(void);
		Account(const Account &copy); //copy constructor
		~Account(void);
		Account & operator=(Account const & 	copy); //assignment operator
		
		string questions[5] = {"Enter a first name: ", "Enter a last name: ", "Enter a nickname: " , "Enter a phone number: ", "Enter a darkest: "};


};

std::ostream & operator<<(std::ostream & o, Account const & i);

int main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		Account book = Account();
	}

	return (0);
};

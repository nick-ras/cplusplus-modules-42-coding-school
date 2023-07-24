#include "PhoneBook.hpp"

using namespace std;
using string = std::string;

Contact::Contact()
{
	string str_[5] = {"", "", "", "", ""};
	string questions_[5] = {"Enter a first name: ", "Enter a last name: ", "Enter a nickname: " , "Enter a phone number: ", "Enter a darkest: "};
}

Contact::~Contact()
{
}

string Contact::get_string(int i)
{
	if (i > 3 || str_[i].empty()) //if empty OR so it doesnt get darkest secret
				return ("");
			else
				return (str_[i]);
}

void Contact::set_string(string input, int i)
{
	if (i > 4)
		return ;
	str_[i] = input;
}

void	Contact::create_contact()
{
	int j = 0;

	while(j < 5)
	{
		cout << questions_[j] << std::endl;
		string input; //try getline again?
		std::cin >> input;
		cout << "INPUT: " << input << std::endl;
		set_string(input, j);
		j++;
	}
}

// class	Contact
// {
// 	private:
// 		string str_[5] = {"", "", "", "", ""};
// 		string questions_[5] = {"Enter a first name: ", "Enter a last name: ", "Enter a nickname: " , "Enter a phone number: ", "Enter a darkest: "};
// 	public:
// 		string	get_string(int i)
// 		{
// 			if (i > 3 || str_[i].empty()) //if empty OR so it doesnt get darkest secret
// 				return ("");
// 			else
// 				return (str_[i]);
// 		}
		
// 		void	set_string(string input, int i)
// 		{
// 			if (i > 4)
// 				return ;
// 			str_[i] = input;
// 		}

// 		void	create_contact()
// 		{
// 			int j = 0;

// 			while(j < 5)
// 			{
// 				cout << questions_[j] << std::endl;
// 				string input; //try getline again?
// 				std::cin >> input;
// 				cout << "INPUT: " << input << std::endl;
// 				set_string(input, j);
// 				j++;
// 			}
// 		}
// };
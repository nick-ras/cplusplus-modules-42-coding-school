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

int Contact::is_empty()
{
	if (str_[0].empty())
        return 1;
	else
	    return 0;
}

void Contact::print_contact_info_using_pipe()
{   int j = 0;

    while (j < 4)
    {
        if (str_[j].length() > 10)
        {
            std::cout << std::setw(10) << str_[j].substr(0, 9) << '.';
        }
        else
        {
            std::cout << std::setw(10) << str_[j];
        }
        if (j < 3) // not last line
        {
            std::cout << " | ";
        }
        j++;
    }
    std::cout << std::endl;
}

void Contact::print_contact_info_using_newline()
{
int j = 0;
	while(j < 4)
	{
		cout << str_[j] << std::endl;	
		j++;
	}
}

void	Contact::create_contact()
{
	int j = 0;
	string input;

	while (j < 5)
	{
		std::cout << questions_[j] << std::endl;
		std::cin >> input;
		if (input == "")
		{
			std::cout << "NO INPUTS. PROGRAM WILL EXIT" << std::endl;
			exit(0);
		}
		std::cout << "INPUT: " << input << std::endl;
	    str_[j] = input;
		j++;
	}
}

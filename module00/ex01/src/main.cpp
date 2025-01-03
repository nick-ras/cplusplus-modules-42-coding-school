#include "PhoneBook.hpp"

using namespace std;
using string = std::string;

int main(int argc, char **argv)
{
	PhoneBook book = PhoneBook();
	if (argc == 1 && argv[0])
	{
		string input;

			while (1)				
			{
				cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
				std::cin >> input;
				if(!book.compare(input, "ADD"))
					book.add_contact();
				else if(!(book.compare(input, "SEARCH")))
				{
					book.print_phonebook();
					int nb;
					cout << "TELL ME WHICH INDEX YOU WANT MEE TO SHOW: " << std::endl;
					std::cin >> nb; //luckely it doesnt accept just 'enter' but
					if (nb > book.contact_count - 1|| nb < 0 || std::cin.fail())
					{
						cout << "out of range or not a numbers" << std::endl;
						std::cin.clear();
						std::cin.ignore();
					}
					else
						book.print_contact(nb);
				}
				else if(!(book.compare(input, "EXIT")))
					return (0); //EXITS
				else
					cout << "TRY AGAIN" << std::endl;
				}
	}
	return (0);
};
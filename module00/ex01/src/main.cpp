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
				if(!book.compare(input, "A"))
					book.add_contact();
				else if(!(book.compare(input, "S")))
				{
					string word;

					cout << "Enter a search term: " << std::endl;
					std::cin >> word; //luckely it doesnt accept just 'enter' but
					cout << "WORD: " << word << std::endl;
					if (!book.search(word))
						cout << "FOUND NOTHING" << std::endl;
				}
				else if(!(book.compare(input, "EXIT")))
					return (0);
				else
					cout << "INVALID COMMAND" << std::endl;
			}
	}
	return (0);
};
#include "PhoneBook.hpp"

using namespace std;
using string = std::string;



class	PhoneBook
{
	private:
		Contact contacts[8];
	public:
		int contact_count = 0;
		{			
			// int i = 0;

			cout << "DESTRUCTOR" << std::endl;			 
			// while (contact_count[i])
			// {
			// 	delete &contacts[i];
			// 	cout << "DELETED CONTACT" << endl;
			// 	i++;
			// }
		}

		void add_contact()
		{
			contacts[contact_count] = Contact();
			contacts[contact_count].create_contact();
			if (contact_count > 6)
			{
				cout << "CONTACTS FULL, FILLING UP FROM INDEX 0" << std::endl;
				contact_count = 0;
			}
			else
				contact_count++;
		}

		int compare(string s1, string s2) 
		{
			int i = 0;
			while (s1[i] != '\0' || s2[i] != '\0')
			{
				//printf("s1: %c, s2: %c\n", s1[i], s2[i]);
				if ((unsigned char)s1[i] < (unsigned char)s2[i])
				{
					return ((unsigned char)s1[i] - (unsigned char)s2[i]);
				}
				if ((unsigned char)s1[i] > (unsigned char)s2[i])
				{
					return ((unsigned char)s1[i] - (unsigned char)s2[i]);
				}
				i++;
			}
			return (0);
		}

		void print_contact(int contact)
		{
			int j = 0;
			while (j < 4)
			{
				if (j > 0 && j < 4)
				{
					std::cout <<  " | " << std::setw(10);
					cout << contacts[contact].get_string(j).substr(0, 9);
				}
				else if (j < 3)
				{
					std::cout << std::setw(10);
					cout << contacts[contact].get_string(j).substr(0, 9);
				}
				j++;
			}
			cout << std::endl;
		}

		// 	searches for a match in all fields and returns index 0 - 3 if found
		int	search(string word) 
		{
			int contact = 0;
			int j = 0;
			while (contact < contact_count) //HERE
			{
				j = 0;
				while(j < 4)
				{
					//cout << contacts[contact].get_string(j).c_str() << std::endl;	
					if (compare(contacts[contact].get_string(j), word) == 0)
					{
						print_contact(contact);
						return (1);
					}
					j++;
				}
				contact++;
			}
			return (0);
		}
};

std::ostream & operator<<(std::ostream & o, PhoneBook const & i); //WHAT WAS THAT FOR?	a = obj b + obj c?

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
# include <iostream>
# include <string>
# include <string.h>

using namespace std;

class	Contact
{
	public:
		std::string str[5] = {"", "", "", "", ""};
		//first_name; last_name;nickname;phone_number; darkest_secret;
};

class	PhoneBook
{
	public:
		Contact *contacts[8] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
		std::string questions[5] = {"Enter a first name: ", "Enter a last name: ", "Enter a nickname: " , "Enter a phone number: ", "Enter a darkest: "};
		~PhoneBook()
		{			
		int i = 0;

		std::cout << "DESTRUCTOR" << std::endl;			 
			while (contacts[i])
			{
				delete contacts[i];
				cout << "DELETED CONTACT" << endl;
				i++;
			}
		}
		void add_contact(int contact_id)
		{
			int j = 0;

			contacts[contact_id] = new Contact();
			while(j < 5)
			{
				std::cout << questions[j] << std::endl;
				std::cin >> contacts[contact_id]->str[j];
				// if (!getline(cin, contacts[contact_id]->str[j])) //doesnt get first name
					// std::cout << "ERROR" << std::endl;
				j++;
			}
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

		int	search(string word) 
		{
			int i = 0;
			int j = 0;

			std::cout << "IN SEARCH" << std::endl;
			while (contacts[i])
			{
				while(&contacts[i]->str[j])
				{
					if (compare(contacts[i]->str[j], word) == 0)
					{
						j = 0;
						while (j < 5)
						{
							if (j < 4)
							std::cout << contacts[i]->str[j] << " |" << std::endl;
							else if (j < 3)
								std::cout << contacts[i]->str[j] << std::endl;
							j++;
						}
						return (1);
					}
					j++;
				}
				i++;
			}
			return (0);
		}

		
};

//first free and the automatic destroyedf
int main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		PhoneBook book = PhoneBook();
		std::string input;

		int add = 0;
		while (1)				
			{
				std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
				std::cin >> input;
				if(!(book.compare(input, "ADD")))
				{
					book.add_contact(add);
					add++; //delete here
				}
				else if(!(book.compare(input, "SEARCH")))
				{
					string word;

					std::cout << "Enter a search term: " << std::endl;
					std::cin >> word; //if not getline both
					if (!book.search(word))
						std::cout << "FOUND NOTHING" << std::endl;
				}
				else if(!(book.compare(input, "EXIT")))
				{
					std::cout << "EXITING" << std::endl;
					return (0);
				}
				else
					std::cout << "INVALID COMMAND" << std::endl;
			}
	}
	return (0);
};

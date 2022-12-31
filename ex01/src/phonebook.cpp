# include <iostream>
# include <string>
# include <string.h>

using namespace std;

class	Contact
{
	public:
		std::string str[5];
		//first_name; last_name;nickname;phone_number; darkest_secret;
		std::string questions[5] = {"Enter a first name: ", "Enter a last name: ", "Enter a nickname: " , "Enter a phone number: ", "Enter a darkest: "};
		
		void return_contact() 
		{
			int i = 0;
			while (i < 5)
			{
				std::cout << str[i] << std::endl;
				i++;
			}
		};
};

class	PhoneBook
{
	public:
		Contact *contacts[8];
		std::string get[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};


		void add_contact(int contact_id)
		{
			int j = 0;

			while(j < 5)
			{
				std::cout << "IN ADD" << std::endl;
				contacts[contact_id] = new Contact();
				std::cout << contacts[contact_id]->questions[j] << std::endl; //create contact?
				if (!getline(cin, contacts[contact_id]->str[j]))
					std::cout << "ERROR" << std::endl;
				j++;
			}
		};

		Contact get_contact(int i)
		{
			return (*contacts[i]);
		}

		int compare(string s1, string s2) 
		{
			int i = 0;
			while (s1[i] != '\0' || s2[i] != '\0')
			{
				printf("s1: %c, s2: %c\n", s1[i], s2[i]);
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

		// int	search(string cnt, string word, Contact *obj) 
		// {
		// 		if (compare(cnt, word) == 0)
		// 		{
		// 			 //DIESPLAY 3 columns see subject pdf
		// 			std::cout.write(obj->str[0].c_str(), 10);
		// 			std::cout << " |" << std::endl;
		// 			return (0);
		// 		}
		// 	return (1);
		// }
};


int main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		PhoneBook book = PhoneBook();
		std::cout << "Enter a search term: " << std::endl;
		std::string input;

		int add = 0;
		while (1)				
			{
				std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
				std::cin >> input;
				if(!(book.compare(input, "ADD")))
				{
					// std::cout << "equal in add" << std::endl;
					book.add_contact(add);
					add++;
					//DELETE instance?
				}
			// 	else if(input == "SEARCH")
			// 	{
			// 		string word;

			// 		std::cout << "Enter a search term: " << std::endl;
			// 		std::cin >> word;
			// 		int j = 0;
			// 		std::cout << book.get_contact(j).str[0] << std::endl;
			// 		// while (book.get_contact(j) == NULL)
			// 		// {
			// 		// 	// while(contacts[j]->str[i])
			// 		// 	// {
			// 		// 	// 	if (search((contacts[j]).str[i], word, contacts[j]) == 0)
			// 		// 	// 		return ;
			// 		// 	// 	i++;
			// 		// 	// }
			// 		// } 
			// 	}
			}
	}
	return (0);
}

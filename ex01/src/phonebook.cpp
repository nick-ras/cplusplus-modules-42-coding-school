# include <iostream>
# include <string>
# include <string.h>

using namespace std;
using string = std::string;

class	Contact
{
	private:
		string str_[5] = {"", "", "", "", ""};
		//do [5][50]?
		//first_name; last_name;nickname;phone_number; darkest_secret;
	public:
		string	get_string(int i)
		{
			if (i > 3 || str_[i].empty()) //if empty OR so it doesnt get darkest secret
				return ("");
			else
				return (str_[i]);
		}
		
		void	set_string(string input, int i)
		{
			if (i > 4)
				return ;
			str_[i] = input;
		}
};

class	PhoneBook
{
	private:
		Contact contacts[8];
		int contact_count = 0;
		// Contact *contacts = new Contact[8];
	public:
			// PhoneBook(const PhoneBook &copy); //copy constructor
			// PhoneBook(); //default constructor
			// PhoneBook & operator=(PhoneBook const & 	copy); //assignment operator
		string questions[5] = {"Enter a first name: ", "Enter a last name: ", "Enter a nickname: " , "Enter a phone number: ", "Enter a darkest: "};

		~PhoneBook()
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

		int start()
		{
			string input;

			while (1)				
			{
				cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
				std::cin >> input;
				if(!compare(input, "A"))
					add_contact(contact_count++);
				else if(!(compare(input, "S")))
				{
					string word;

					cout << "Enter a search term: " << std::endl;
					std::cin >> word; //luckely it doesnt accept just 'enter' but
					cout << "WORD: " << word << std::endl;
					if (!search(word))
						cout << "FOUND NOTHING" << std::endl;
				}
				else if(!(compare(input, "EXIT")))
					return (0);
				else
					cout << "INVALID COMMAND" << std::endl;
			}
		}

		void add_contact(int contact_id)
		{
			int j = 0;

			contacts[contact_id] = Contact();
			while(j < 5)
			{
				cout << questions[j] << std::endl;
				string input;
				std::cin >> input;
				cout << "INPUT: " << input << std::endl;
				contacts[contact_id].set_string(input, j);
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

		// 	searches for a match in all fields and returns index 0 - 3 if found
		int	search(string word) 
		{
			int contact = 0;
			int j = 0;
			cout << "IN SEARCH" << std::endl;
			while (contact < contact_count) //HERE
			{
				while(j < 4)
				{
					cout << contacts[contact].get_string(j).c_str() << std::endl;	
					if (compare(contacts[contact].get_string(j), word) == 0)
					{
						j = 0;
						while (j < 4)
						{
							if (j < 4)
							cout << contacts[contact].get_string(j) << " |" << std::endl;
							else if (j < 3)
								cout << contacts[contact].get_string(j) << std::endl;
							j++;
						}
						return (1);
					}
					j++;
				}
				contact++;
			}
			return (0);
		}
};

std::ostream & operator<<(std::ostream & o, PhoneBook const & i);

int main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		PhoneBook book = PhoneBook();
		book.start();
		string input;
	}

	return (0);
};

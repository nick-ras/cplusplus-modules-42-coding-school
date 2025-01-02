#include "PhoneBook.hpp"

using namespace std;
using string = std::string;


PhoneBook::PhoneBook()
{
	contact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
	contacts[contact_count] = Contact();
	contacts[contact_count].create_contact();
	if (contact_count > 7)
	{
		cout << "CONTACTS FULL, FILLING UP FROM INDEX 0" << std::endl;
		contact_count = 0;
	}
	else
		contact_count++;
}

int PhoneBook::compare(string s1, string s2) 
{
    if (s1.size() != s2.size()) 
    {
        return s1.size() - s2.size();  // Compare string lengths if sizes differ
    }

    int i = 0;
    while (i < s1.size())  // Compare characters as long as we haven't reached the end of the strings
    {
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

    return 0;  // Return 0 if strings are equal
}

void PhoneBook::print_contact_information_for_one(int contact)
{
	int j = 0;
	while (j < 4) //doesnt print darkest secret
	{
		std::cout << std::setw(10); //just safety, so its doesnt print smth it shouldnt
		cout << contacts[contact].get_string(j).substr(0, 9);
	}
	cout << std::endl;
}

// 	Will first show all contacts, and make you choose an index, and then acticate print_contact_information
int	PhoneBook::print_contact_information_for_all (string name_of_contact) 
{
	int i = 0;
	while (contacts[i] != NULL)
	{
		print_contact_information_for_one(i);
		i++;
	}
	return (0);
}

// class	PhoneBook
// {
// 	private:
// 		Contact contacts[8];
// 	public:
// 		int contact_count = 0;
// 		~PhoneBook()
// 		{			
// 			// int i = 0;

// 			cout << "DESTRUCTOR" << std::endl;			 
// 			// while (contact_count[i])
// 			// {
// 			// 	delete &contacts[i];
// 			// 	cout << "DELETED CONTACT" << endl;
// 			// 	i++;
// 			// }
// 		}

// 		void add_contact()
// 		{
// 			contacts[contact_count] = Contact();
// 			contacts[contact_count].create_contact();
// 			if (contact_count > 6)
// 			{
// 				cout << "CONTACTS FULL, FILLING UP FROM INDEX 0" << std::endl;
// 				contact_count = 0;
// 			}
// 			else
// 				contact_count++;
// 		}

// 		int compare(string s1, string s2) 
// 		{
// 			int i = 0;
// 			while (s1[i] != '\0' || s2[i] != '\0')
// 			{
// 				//printf("s1: %c, s2: %c\n", s1[i], s2[i]);
// 				if ((unsigned char)s1[i] < (unsigned char)s2[i])
// 				{
// 					return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 				}
// 				if ((unsigned char)s1[i] > (unsigned char)s2[i])
// 				{
// 					return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 				}
// 				i++;
// 			}
// 			return (0);
// 		}

// 		void print_contact_information(int contact)
// 		{
// 			int j = 0;
// 			while (j < 4)
// 			{
// 				if (j > 0 && j < 4)
// 				{
// 					std::cout <<  " | " << std::setw(10);
// 					cout << contacts[contact].get_string(j).substr(0, 9);
// 				}
// 				else if (j < 3)
// 				{
// 					std::cout << std::setw(10);
// 					cout << contacts[contact].get_string(j).substr(0, 9);
// 				}
// 				j++;
// 			}
// 			cout << std::endl;
// 		}

// 		// 	searches for a match in all fields and returns index 0 - 3 if found
// 		int	search(string name_of_contact) 
// 		{
// 			int contact = 0;
// 			int j = 0;
// 			while (contact < contact_count) //HERE
// 			{
// 				j = 0;
// 				while(j < 4)
// 				{
// 					//cout << contacts[contact].get_string(j).c_str() << std::endl;	
// 					if (compare(contacts[contact].get_string(j), name_of_contact) == 0)
// 					{
// 						print_contact_information(contact);
// 						return (1);
// 					}
// 					j++;
// 				}
// 				contact++;
// 			}
// 			return (0);
// 		}
// };
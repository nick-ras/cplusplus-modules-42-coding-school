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
		cout << "PHONEBOOK FULL, FILLING UP FROM INDEX 0" << std::endl;
		contact_count = 0;
	}
	else
		contact_count++;
}

void PhoneBook::print_phonebook() 
{
	int i = 0;

    while (i < MAX_CONTACTS)
	{
		if (contacts[i].is_empty()) 
			return;
		cout << "index " << i << ": ";
		contacts[i].print_contact_info_using_pipe();
		i++;
	}
}

void PhoneBook::print_contact(int nb) 
{
	contacts[nb].print_contact_info_using_newline();
}

int PhoneBook::compare(string s1, string s2) 
{
    if (s1.length() != s2.length()) 
    {
        return s1.length() - s2.length();  // Compare string lengths if sizes differ
    }

    long unsigned i = 0;
    while (i < s1.length())  // Compare characters as long as we haven't reached the end of the strings
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
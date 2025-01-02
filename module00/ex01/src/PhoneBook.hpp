

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include <iostream>
# include <string>
# include <iomanip>

using namespace std;
class	Contact
{
	private:
		string str_[5];
		string questions_[5];
	public:
		Contact(); //??
		string	get_string(int i);
		void	set_string(string input, int i);
		void	create_contact();
		virtual ~Contact();
};

class PhoneBook
{
private:
    static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
public:
	PhoneBook();
	virtual ~PhoneBook();
	PhoneBook & operator=(PhoneBook const & 	copy); //assignment operator
	// PhoneBook(const PhoneBook &copy); //copy constructor
	int contact_count;
	void add_contact();
	int compare(string s1, string s2);
	void print_contact_information_for_one(int contact);
	int	print_contact_information_for_all(string word);
	int main(int argc, char **argv);
};
std::ostream & operator<<(std::ostream & o, PhoneBook const & i); //a = obj b + obj c?
#endif
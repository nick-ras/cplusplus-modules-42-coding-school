

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
};

class PhoneBook
{
private:
	Contact contacts[8];
public:
	// PhoneBook(void);
	PhoneBook & operator=(PhoneBook const & 	copy); //assignment operator
	// PhoneBook(const PhoneBook &copy); //copy constructor
	~PhoneBook();
	void add_contact();
	int compare(string s1, string s2);
	void print_contact(int contact);
	int	search(string word);
	int main(int argc, char **argv);
	int contact_count;
};
std::ostream & operator<<(std::ostream & o, PhoneBook const & i); //a = obj b + obj c?
#endif
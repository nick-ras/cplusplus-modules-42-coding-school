# include <iostream>
# include <string>
using namespace std;

void	BaseClass(char *str)
{
	std::string new_str;
	int i = 0;

	while (str[i])
	{
		if(str[i] >= 97 && str[i] <= 122 )
			new_str[i] = str[i] - 32;
		i++;
	}
	//printf("%s", new_str.c_str());
	std::cout << new_str.c_str() << std::endl;
}

void	BaseClass(void)
{
	std::string empty = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << empty << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		BaseClass (argv[1]);
	else if (argc == 1)
		BaseClass ();
	return (0);
}

# include <iostream>
# include <string>

using namespace std;

void	Megaphone(char **argv)
{
	int i = 0;
	int j = 1;

	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if(argv[j][i] >= 97 && argv[j][i] <= 122 )
				argv[j][i] = argv[j][i] - 32;
			i++;
		}
		if (j == 1)
			cout << argv[j] << " ";
		else
			cout<< argv[j] << " ";
		j++;
	}
	cout << endl;
}

void	Megaphone(void)
{
	std::string empty = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << empty;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		Megaphone();
	if (argc < __INT_MAX__)
		Megaphone (argv);
	return (0);
}

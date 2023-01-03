
// for	makeDeposit( *(it.second) );
// displayAccountsInfos();
// for_each( displayStatus ) )
// for makeWithdrawal
// displayAccountsInfos();
// for_each( displayStatus

# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <chrono>
# include <iomanip>

using namespace std;
using string = std::string;

int	Zombie::_nbAccounts = 0;
int	Zombie::_totalAmount = 0;
int	Zombie::_totalNbDeposits = 0;
int	Zombie::_totalNbWithdrawals = 0;

Zombie::Zombie()
{
	//HEREHEREHERHERE matbe use vector?

	// this->_accountIndex = this->_nbAccounts++;
	cout << "Zombie created" << endl;
}

Zombie::Zombie(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;

	cout << "//Zombie(init deposit)";
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

Zombie::~Zombie(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
}

int Zombie::getNbAccounts(void)
{
	return (Zombie::_nbAccounts);
}


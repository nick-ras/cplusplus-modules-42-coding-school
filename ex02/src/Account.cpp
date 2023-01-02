# include "Account.hpp"
# include <iostream>
# include <string>

using namespace std;
using string = std::string;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << endl;
}

void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _totalAmount)
		return (false);
	_totalAmount -= withdrawal;
}

int		checkAmount( void )
{
	// if (Account::_totalAmount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;
}

void	Account::_displayTimestamp( void )
{
	cout << time(0);
}
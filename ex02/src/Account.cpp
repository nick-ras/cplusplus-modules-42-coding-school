
// for	makeDeposit( *(it.second) );
// displayAccountsInfos();
// for_each( displayStatus ) )
// for makeWithdrawal
// displayAccountsInfos();
// for_each( displayStatus

# include "Account.hpp"
# include <iostream>
# include <string>
# include <chrono>
# include <iomanip>

using namespace std;
using string = std::string;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	//HEREHEREHERHERE matbe use vector?

	// this->_accountIndex = this->_nbAccounts++;
	cout << "Account created" << endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;

	cout << "//Account(init deposit)";
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
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
	_displayTimestamp();
	cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << endl;
}

void	Account::makeDeposit( int deposit )
{
	cout << "makeDeposit()";
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	cout << ";deposits:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	cout << "makeWithdrawal()";
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	 cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (Account::_totalAmount);
}

void	Account::displayStatus( void ) const
{
	cout << "displayStatus";
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;

}

void	Account::_displayTimestamp( void )
{
	//i could do if len < 2 then add 0, for the different parts of the time
	std::time_t time_now = chrono::system_clock::to_time_t(chrono::system_clock::now());
	tm local_t = *localtime(&time_now);
	cout << "[" << local_t.tm_year + 1900 <<  \
	setw(2) << local_t.tm_mon <<      \
	setw(2) << local_t.tm_mday << "_" << \
	setw(2) << local_t.tm_hour <<        \
	setw(2) << local_t.tm_min <<       \
	setw(2) << local_t.tm_sec << "] ";
}
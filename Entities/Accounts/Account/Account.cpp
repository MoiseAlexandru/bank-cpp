//
// Created by Moise Alexandru on 6/3/2024.
//

#include "Account.h"

#include "../../../Exceptions/IllegalAmountException.h"

int Account::numberOfAccounts = 0;

double Account::getAccountId() const
{
    return accountId;
}


double Account::getBalance() const
{
    return balance;
}

std::shared_ptr<User> Account::getOwner() const
{
    return owner;
}

Account::AccountType Account::getAccountType() const
{
    return accountType;
}


void Account::addMoney(int amount)
{
    if(balance <= 0)
        throw IllegalAmountException("Amount should be positive.");
    balance += amount;
}

void Account::removeMoney(int amount)
{
    if(balance <= 0)
        throw new IllegalAmountException("Amount should be positive.");
    if(balance < amount)
        throw new IllegalAmountException("Not enough balance for this withdrawal");
    balance -= amount;
}


std::ostream& operator<<(std::ostream& os, const Account& account) {
    os << "(Account: " << account.getAccountId() << ", type: " << account.getAccountType() << ")\n";
    return os;
}

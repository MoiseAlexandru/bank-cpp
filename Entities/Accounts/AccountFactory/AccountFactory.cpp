//
// Created by Moise Alexandru on 6/3/2024.
//

#include "AccountFactory.h"

std::shared_ptr<Account> AccountFactory::createAccount(std::string type, std::shared_ptr<User> user, int loanAmount, double maxCreditGain, double interestRate, int duration, int maxWithdrawals)
{
    if(type == "CHECKING")
        return std::make_shared<CheckingAccount>(user);
    if(type == "CREDIT")
        return std::make_shared<CreditAccount>(user, loanAmount, maxCreditGain, interestRate, duration);
    if(type == "SAVINGS")
        return std::make_shared<SavingsAccount>(user, maxWithdrawals, interestRate);
    throw std::invalid_argument("Unknown account type");
};
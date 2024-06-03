//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "../Account/Account.h"


class SavingsAccount : public Account {
private:
    int maxWithdrawals;
    double interestRate;

public:
    SavingsAccount(std::shared_ptr <User> user, int maxWithdrawals, double interestRate) : Account(user, SAVINGS_ACCOUNT)
    {
        this -> maxWithdrawals = maxWithdrawals;
        this -> interestRate = interestRate;
    }
};



#endif //SAVINGSACCOUNT_H

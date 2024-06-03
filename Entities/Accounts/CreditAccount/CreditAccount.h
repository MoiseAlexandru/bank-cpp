//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <cmath>
#include <memory>

#include "../../User/User.h"
#include "../Account/Account.h"

class CreditAccount : public Account {
private:
    double loanAmount;
    double maxCreditGain;
    double interestRate;
    int duration;

public:

    CreditAccount(std::shared_ptr<User> user, int loanAmount, double maxCreditGain, double interestRate, int duration) : Account(user, CREDIT_ACCOUNT)
    {
        this -> loanAmount = loanAmount;
        this -> maxCreditGain = maxCreditGain;
        this -> interestRate = interestRate;
        this -> duration = duration;
    }

    double calculateMonthlyPayment(int currentMonth);
};



#endif //CREDITACCOUNT_H

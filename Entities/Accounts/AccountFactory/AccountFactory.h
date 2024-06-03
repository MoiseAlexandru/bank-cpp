//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNTFACTORY_H
#define ACCOUNTFACTORY_H
#include <memory>

#include "../Account/Account.h"
#include "../CheckingAccount/CheckingAccount.h"
#include "../CreditAccount/CreditAccount.h"
#include "../SavingsAccount/SavingsAccount.h"


class AccountFactory {
public:
    static std::shared_ptr<Account> createAccount(std::string type, std::shared_ptr<User> user, int loanAmount = 0, double maxCreditGain = 0.0, double interestRate = 0.0, int duration = 0, int maxWithdrawals = 0);
};



#endif //ACCOUNTFACTORY_H

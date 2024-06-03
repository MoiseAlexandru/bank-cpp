//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "../Account/Account.h"


class CheckingAccount : public Account {
private:
    double dailyWithdrawLimit;
public:
    CheckingAccount(std::shared_ptr <User> user) : Account(user, CHECKING_ACCOUNT)
    {
        dailyWithdrawLimit = 1000;
    }

    friend std::ostream& operator<<(std::ostream os, const CheckingAccount& account);
};



#endif //CHECKINGACCOUNT_H

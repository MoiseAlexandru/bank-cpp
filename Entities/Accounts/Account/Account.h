//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <memory>
#include <ostream>

#include "../../User/User.h"


class Account {
    static int numberOfAccounts;
private:
    enum AccountType
    {
        CHECKING_ACCOUNT,
        CREDIT_ACCOUNT,
        SAVINGS_ACCOUNT
    };
    AccountType accountType;

protected:
    double balance;
    int accountId;
    std::shared_ptr<User> owner;

public:
    Account()
    {
        balance = 0;
    }

    double getAccountId() const;

    double getBalance() const;

    AccountType getAccountType() const;

    std::shared_ptr<User> getOwner() const;

    void addMoney(int amount);

    void removeMoney(int amount);

    friend std::ostream& operator<<(std::ostream os, const Account& account);
};



#endif //ACCOUNT_H

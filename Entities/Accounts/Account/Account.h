//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H



class Account {
    static int numberOfAccounts;

protected:
    double balance;
    int accountId;

public:
    Account()
    {
        balance = 0;
    }

    double getAccountId() const;

    double getBalance() const;

    void addMoney(int amount);

    void removeMoney(int amount);

};



#endif //ACCOUNT_H

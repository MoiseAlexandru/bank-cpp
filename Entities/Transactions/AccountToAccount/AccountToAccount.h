//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNTTOACCOUNT_H
#define ACCOUNTTOACCOUNT_H
#include <string>

#include "../../Accounts/Account/Account.h"
#include "../Transaction/Transaction.h"


class AccountToAccount : public Transaction {
private:
    Account receiver;

public:
    Account getReceiver() const;

    bool amountIsValid() const override;

    friend std::ostream& operator<<(std::ostream os, const AccountToAccount& transfer);
};



#endif //ACCOUNTTOACCOUNT_H

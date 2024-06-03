//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H
#include "../Transaction/Transaction.h"


class Withdrawal : public Transaction {

    static const double withdrawalLimit;

private:
    bool amountIsValid() const override;
};



#endif //WITHDRAWAL_H

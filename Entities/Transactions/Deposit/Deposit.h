//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef DEPOSIT_H
#define DEPOSIT_H
#include "../Transaction/Transaction.h"


class Deposit : public Transaction {

    friend std::ostream& operator<<(std::ostream os, const Deposit& deposit);

    bool amountIsValid() const override;
};



#endif //DEPOSIT_H

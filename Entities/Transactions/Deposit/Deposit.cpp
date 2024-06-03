//
// Created by Moise Alexandru on 6/3/2024.
//

#include "Deposit.h"

#include <ostream>

std::ostream& operator<<(std::ostream& os, const Deposit& deposit) {
    os << "(Transaction - DEPOSIT from " << deposit.getInitiator().getAccountId() << ", " << deposit.getStatus() << ": ";
    os << "amount: " << deposit.getAmount() << ", fees: " << deposit.getTransactionFee() << ")\n";
    return os;
}

bool Deposit::amountIsValid() const override
{
    return amount > 0;
}

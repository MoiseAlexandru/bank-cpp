//
// Created by Moise Alexandru on 6/3/2024.
//

#include "Withdrawal.h"

#include <ostream>

const double Withdrawal::withdrawalLimit = 150.0;

std::ostream& operator<<(std::ostream& os, const Withdrawal& withdrawal) {
    os << "(Transaction - WITHDRAWAL from " << withdrawal.getInitiator().getAccountId() << ", " << withdrawal.getStatus() << ": ";
    os << "amount: " << withdrawal.getAmount() << ", fees: " << withdrawal.getTransactionFee() << ")\n";
    return os;
}

bool Withdrawal::amountIsValid() const
{
    return amount > 0 && amount <= withdrawalLimit && amount <= initiator.getBalance();
}

//
// Created by Moise Alexandru on 6/3/2024.
//

#include "AccountToAccount.h"
#include <ostream>

bool AccountToAccount::amountIsValid() const
{
    return amount > 0 && amount <= initiator.getBalance();
}

std::ostream& operator<<(std::ostream& os, const AccountToAccount& transfer) {
    os << "(Transaction - TRANSFER from " << transfer.getInitiator().getAccountId() << " to " << transfer.getReceiver().getAccountId() << ", " << transfer.getStatus() << ": ";
    os << "amount: " << transfer.getAmount() << ", fees: " << transfer.getTransactionFee() << ")\n";
    return os;
}

Account AccountToAccount::getReceiver() const
{
    return this -> receiver;
}

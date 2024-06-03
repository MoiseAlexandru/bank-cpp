//
// Created by Moise Alexandru on 6/3/2024.
//

#include "CheckingAccount.h"

std::ostream& operator<<(std::ostream& os, const CheckingAccount& account) {
    os << "(Type: checking account, id: " << account.getAccountId() << ", balance: " << account.getBalance() << ")\n";
    return os;
}
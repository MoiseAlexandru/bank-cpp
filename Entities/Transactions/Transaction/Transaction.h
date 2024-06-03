//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>
#include "../../Accounts/Account/Account.h"

class Transaction {
protected:
    enum TransactionType
    {
        WITHDRAWAL,
        DEPOSIT,
        ACCOUNT_TO_ACCOUNT
    };

    enum TransactionStatus
    {
        PENDING,
        COMPLETED,
        CANCELED
    };

    Account initiator;
    TransactionType transactionType;
    double amount;
    double transactionFee;
    TransactionStatus status;

public:

    Transaction(std::string initiator, TransactionType transactionType, double amount, double transactionFee);

    double getAmount() const;
    Account getInitiator() const;
    TransactionType getTransactionType() const;
    double getTransactionFee() const;
    TransactionStatus getStatus() const;

    void setStatus(TransactionStatus newStatus);

private:
    virtual bool amountIsValid() const = 0;
};



#endif //TRANSACTION_H

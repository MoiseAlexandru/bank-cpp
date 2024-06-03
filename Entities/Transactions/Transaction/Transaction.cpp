//
// Created by Moise Alexandru on 6/3/2024.
//

#include "Transaction.h"

Transaction::Transaction(std::string initiator, TransactionType transactionType, double amount, double transactionFee) : initiator(initiator), transactionType(transactionType), amount(amount), transactionFee(transactionFee)
{
    this -> status = PENDING;
}

double Transaction::getAmount() const
{
    return this -> amount;
}

Account Transaction::getInitiator() const
{
    return this -> initiator;
}

Transaction::TransactionType Transaction::getTransactionType() const
{
    return this -> transactionType;
}

double Transaction::getTransactionFee() const
{
    return this -> transactionFee;
}

Transaction::TransactionStatus Transaction::getStatus() const
{
    return this -> status;
}


void Transaction::setStatus(const TransactionStatus newStatus)
{
    this -> status = newStatus;
}



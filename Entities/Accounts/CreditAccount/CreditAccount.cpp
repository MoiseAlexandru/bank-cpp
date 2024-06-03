//
// Created by Moise Alexandru on 6/3/2024.
//

#include "CreditAccount.h"

double CreditAccount::calculateMonthlyPayment(int currentMonth)
{
    double monthlyInterestRate = interestRate / 12;
    double numerator = loanAmount * (monthlyInterestRate * std::pow(1 + monthlyInterestRate, duration));
    double denominator = std::pow(1 + monthlyInterestRate, duration) - 1;
    double payment = numerator / denominator;
    double balanceForInterest = loanAmount - (payment * (currentMonth - 1));
    double interest = balanceForInterest * monthlyInterestRate;
    return payment + interest;
}
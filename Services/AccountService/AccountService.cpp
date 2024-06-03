//
// Created by Moise Alexandru on 6/3/2024.
//

#include "AccountService.h"

AccountService& AccountService::getInstance()
{
    static AccountService instance;
    return instance;
}

std::vector<std::shared_ptr<Account>> AccountService::findAccountsByUsername(std::string username) const
{
    return accountRepository.getAccountsByUsername(username);
}

std::shared_ptr<Account> AccountService::findAccountById(int accountId) const
{
    return accountRepository.getAccountById(accountId);
}

void AccountService::addAccount(std::shared_ptr<Account> account)
{
    return accountRepository.addAccount(account);
}

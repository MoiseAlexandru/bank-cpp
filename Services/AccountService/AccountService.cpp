//
// Created by Moise Alexandru on 6/3/2024.
//

#include "AccountService.h"

AccountService& AccountService::getInstance()
{
    static AccountService instance;
    return instance;
}

std::shared_ptr<Account> AccountService::findAccountById(int accountId)
{
    return accountRepository.getAccountById(accountId);
}

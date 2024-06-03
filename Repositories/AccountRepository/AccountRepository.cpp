//
// Created by Moise Alexandru on 6/3/2024.
//

#include "AccountRepository.h"

#include <algorithm>

#include "../../Exceptions/AccountNotFoundException.h"

AccountRepository& AccountRepository::getInstance()
{
    static AccountRepository instance;
    return instance;
}

std::vector<std::shared_ptr<Account>> AccountRepository::getAccountsByUsername(const std::string& username) const
{
    std::vector<std::shared_ptr<Account>> foundAccounts;
    for(auto& it : accounts)
        if(it->getOwner()->getUsername() == username)
            foundAccounts.push_back(it);
    return foundAccounts;
}

std::shared_ptr<Account> AccountRepository::getAccountById(int accountId) const
{
    auto isMatchingId = [accountId](const std::shared_ptr<Account>& account)
    {
        return account -> getAccountId() == accountId;
    };

    auto it = std::find_if(accounts.begin(), accounts.end(), isMatchingId);
    if(it != accounts.end())
        return *it;
    else
        throw AccountNotFoundException("Unable to find an account with this id");
}

void AccountRepository::addAccount(std::shared_ptr<Account> account)
{
    accounts.push_back(account);
}
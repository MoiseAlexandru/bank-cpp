//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNTSERVICE_H
#define ACCOUNTSERVICE_H
#include "../../Repositories/AccountRepository/AccountRepository.h"


class AccountService {
private:
    AccountRepository& accountRepository;
    AccountService() : accountRepository(AccountRepository::getInstance()) {}
public:
    static AccountService& getInstance();
    std::shared_ptr<Account> findAccountById(int accountId) const;
    std::vector <std::shared_ptr<Account> > findAccountsByUsername(std::string username) const;
    void addAccount(std::shared_ptr<Account> account);
};



#endif //ACCOUNTSERVICE_H

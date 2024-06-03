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
    public std::shared_ptr<Account> findAccountById(int accountId);
};



#endif //ACCOUNTSERVICE_H

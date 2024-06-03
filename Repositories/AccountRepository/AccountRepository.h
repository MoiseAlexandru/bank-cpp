//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNTREPOSITORY_H
#define ACCOUNTREPOSITORY_H
#include <memory>
#include <vector>

#include "../../Entities/Accounts/Account/Account.h"
#include "../../Entities/User/User.h"


class AccountRepository {
private:
    std::vector<std::shared_ptr<Account>> accounts;
    AccountRepository() = default;
public:
    static AccountRepository& getInstance();

    std::vector<std::shared_ptr<Account>> getAccountsByUsername(const std::string &username) const;

    std::shared_ptr<Account> getAccountById(int accountId) const;
};



#endif //ACCOUNTREPOSITORY_H

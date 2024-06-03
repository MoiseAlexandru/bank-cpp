//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef USERREPOSITORY_H
#define USERREPOSITORY_H
#include <map>

#include "../../Entities/User/User.h"


class UserRepository {
private:
    std::map<std::string, User> users;
    UserRepository() = default;

public:
    static UserRepository& getInstance();

    void addUser(const User& user);

    User& getUserByUsername(const std::string& username);

    bool usernameExists(const std::string& username) const;
};

#endif //USERREPOSITORY_H

//
// Created by Moise Alexandru on 6/3/2024.
//

#include "UserRepository.h"

#include "../../Exceptions/UsernameAlreadyExistsException.h"

UserRepository& UserRepository::getInstance()
{
    static UserRepository instance;
    return instance;
}

void UserRepository::addUser(const User& user)
{
    const std::string username = user.getUsername();
    if(usernameExists(username))
        throw UsernameAlreadyExistsException("An user already has this username");
    users[username] = user;
}

User& UserRepository::getUserByUsername(const std::string& username)
{
    if(users.count(username))
        return users[username];
    throw UsernameAlreadyExistsException("User not found");
}

bool UserRepository::usernameExists(const std::string& username) const
{
    return users.count(username) > 0;
}
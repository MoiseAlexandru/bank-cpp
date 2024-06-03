//
// Created by Moise Alexandru on 6/3/2024.
//

#include "UserRepository.h"

#include "../../Exceptions/UsernameAlreadyExistsException.h"
#include "../../Exceptions/UserNotFoundException.h"

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
    users.insert(std::make_pair(username, user));
}

const User& UserRepository::getUserByUsername(const std::string& username) const {
    auto it = users.find(username);
    if (it != users.end())
        return it -> second;
    throw UserNotFoundException("User not found");
}


bool UserRepository::usernameExists(const std::string& username) const
{
    return users.count(username) > 0;
}
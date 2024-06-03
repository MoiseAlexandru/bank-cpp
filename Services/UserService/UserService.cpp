//
// Created by Moise Alexandru on 6/3/2024.
//

#include "UserService.h"


UserService& UserService::getInstance()
{
    static UserService instance;
    return instance;
}

void UserService::createUser(const std::string username, const std::string password, const std::string name, const std::string address)
{
    if(userRepository.usernameExists(username))
        throw UsernameAlreadyExistsException("This username is taken");
    User user(username, password, name, address);
    userRepository.addUser(user);
}

void UserService::authenticateUser(const std::string username, const std::string password) const
{
    if(!userRepository.usernameExists(username))
        throw BadCredentials("Username or password incorect");
    User& user = userRepository.getUserByUsername(username);
    if(!user.matchPassword(password))
        throw BadCredentials("Username or password incorrect");
}

User& UserService::getUserByUsername(const std::string username) const
{
    return userRepository.getUserByUsername(username);
}



//
// Created by Moise Alexandru on 6/2/2024.
//

#include "User.h"

User::User(const std::string& username, const std::string& password, const std::string& name, const std::string& address) : username(username), password(password), name(name), address(address)
{
    this -> username = username;
    this -> password = password;
    this -> name = name;
    this -> address = address;
}

void User::setAddress(const std::string& address)
{
    this -> address = address;
}

void User::updatePassword(const std::string& password)
{
    this -> password = password;
}

bool User::matchPassword(const std::string& triedPassword) const
{
    return this -> password == triedPassword;
}

std::string User::getName() const
{
    return this -> name;
}

std::string User::getUsername() const
{
    return this -> username;
}

std::string User::getAddress() const
{
    return this -> address;
}




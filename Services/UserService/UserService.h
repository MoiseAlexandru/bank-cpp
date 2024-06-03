//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef USERSERVICE_H
#define USERSERVICE_H

#include <string>

#include "../../Exceptions/UsernameAlreadyExistsException.h"
#include "../../Repositories/UserRepository/UserRepository.h"

class UserService {
private:
    UserRepository& userRepository;
    UserService() : userRepository(UserRepository::getInstance());

public:
    static UserService& getInstance();

    void createUser(const std::string username, const std::string password, const std::string name, const std::string address)
    {
        if(userRepository.usernameExists(username))
            throw UsernameAlreadyExistsException("This username is taken");
        User user(username, password, name, address);
        userRepository.addUser(user);
    }


};



#endif //USERSERVICE_H

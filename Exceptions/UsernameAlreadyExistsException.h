//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef USERNAMEALREADYEXISTSEXCEPTION_H
#define USERNAMEALREADYEXISTSEXCEPTION_H
#include <exception>
#include <string>

class UsernameAlreadyExistsException: std::exception
{
private:
    std::string message;

public:
    explicit UsernameAlreadyExistsException(const std::string& message) : message(message) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

#endif //USERNAMEALREADYEXISTSEXCEPTION_H

//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef USERNOTFOUNDEXCEPTION_H
#define USERNOTFOUNDEXCEPTION_H
#include <exception>
#include <string>

class UserNotFoundException: std::exception
{
private:
    std::string message;

public:
    explicit UserNotFoundException(const std::string& message) : message(message) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};


#endif //USERNOTFOUNDEXCEPTION_H

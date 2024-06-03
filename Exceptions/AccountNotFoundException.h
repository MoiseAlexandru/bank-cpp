//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ACCOUNTNOTFOUNDEXCEPTION_H
#define ACCOUNTNOTFOUNDEXCEPTION_H
#include <exception>
#include <string>

class AccountNotFoundException: std::exception
{
private:
    std::string message;

public:
    explicit AccountNotFoundException(const std::string& message) : message(message) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

#endif //ACCOUNTNOTFOUNDEXCEPTION_H

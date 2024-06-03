//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef ILLEGALAMOUNTEXCEPTION_H
#define ILLEGALAMOUNTEXCEPTION_H
#include <exception>
#include <string>

class IllegalAmountException: std::exception
{
private:
    std::string message;

public:
    explicit IllegalAmountException(const std::string& message) : message(message) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};


#endif //ILLEGALAMOUNTEXCEPTION_H

//
// Created by Moise Alexandru on 6/3/2024.
//

#ifndef BADCREDENTIALS_H
#define BADCREDENTIALS_H
#include <exception>
#include <string>

class BadCredentials: std::exception
{
private:
    std::string message;

public:
    explicit BadCredentials(const std::string& message) : message(message) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};



#endif //BADCREDENTIALS_H

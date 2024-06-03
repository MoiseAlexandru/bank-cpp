//
// Created by Moise Alexandru on 6/2/2024.
//

#ifndef USER_H
#define USER_H
#include <string>


class User {

private:
    std::string username;
    std::string password;
    std::string name;
    std::string address;

public:
    User(const std::string& username, const std::string& password, const std::string& name, const std::string& address);

    std::string getUsername() const;

    std::string getName() const;

    std::string getAddress() const;

    void updatePassword(const std::string& newPassword);

    void setAddress(const std::string& address);

    bool matchPassword(const std::string& triedPassword) const;

};



#endif //USER_H

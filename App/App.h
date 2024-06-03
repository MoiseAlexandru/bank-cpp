#ifndef APP_H
#define APP_H

#include <memory>

#include "../Entities/User/User.h"

class App {
    std::unique_ptr<User> loggedInUser;

private:
    App()
    {
        loggedInUser = nullptr;
    };
    int readNextInt();
    void displayCreateOrLoginMenu();
    void displayCreateUserMenu();
    void displayLoginMenu();
    void displayAdminMenu();
    void displayMenu();
    void displayAccounts();
    void displayAccount();

public:
    static App& getInstance();

    void run();
};

#endif // APP_H

#ifndef APP_H
#define APP_H

#include <memory>

#include "../Entities/User/User.h"
#include "../Services/UserService/UserService.h"

class App {
    UserService& userService;
    AccountService& accountService;
    std::unique_ptr<User> loggedInUser;

private:
    App() : userService(UserService::getInstance()), accountService(AccountService::getInstance)
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
    void selectAccountDialogue();
    void manageAccountMenu();
    void createAccountMenu();

public:
    static App& getInstance();

    void run();
};

#endif // APP_H

#ifndef APP_H
#define APP_H

#include <memory>

#include "../Entities/Accounts/Account/Account.h"
#include "../Entities/User/User.h"
#include "../Services/UserService/UserService.h"
#include "../Services//AccountService/AccountService.h"

class App {
    UserService& userService;
    AccountService& accountService;
    std::shared_ptr<User> loggedInUser;
    std::shared_ptr<Account> currentAccount;

private:
    App() : userService(UserService::getInstance()), accountService(AccountService::getInstance())
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
    void createCheckingAccountMenu();
    void createCreditAccountMenu();
    void createSavingsAccountMenu();

public:
    static App& getInstance();

    void run();
};

#endif // APP_H

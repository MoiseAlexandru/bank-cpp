//
// Created by Moise Alexandru on 6/3/2024.
//

#include "App.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "../Entities/Accounts/Account/Account.h"
#include "../Entities/Accounts/AccountFactory/AccountFactory.h"
#include "../Exceptions/AccountNotFoundException.h"
#include "../Services/AccountService/AccountService.h"

App& App::getInstance()
{
    static App instance;
    return instance;
}

int App::readNextInt()
{
    while(true)
    {
        std::string line;
        getline(std::cin, line);
        if(std::all_of(line.begin(), line.end(), ::isdigit)) // number;
            return std::stoi(line);
        std::cout << "Invalid input, try again.\n";
    }
}

void App::run()
{
    std::cout << "Welcome to the app.\n";
    displayCreateOrLoginMenu();
}


void App::displayCreateOrLoginMenu()
{
    while(true)
    {
        std::cout << "1. Create a user\n";
        std::cout << "2. Login\n";
        std::cout << "3. Admin actions\n";

        int choice = readNextInt();
        switch (choice)
        {
            case 1:
                displayCreateUserMenu();
                break;
            case 2:
                displayLoginMenu();
                break;
            case 3:
                displayAdminMenu();
                break;
            default:
                std::cout << "Invalid input. Try again.\n";
        }
    }
}

void App::displayCreateUserMenu()
{
    while(true)
    {
        std::string username, password, name, address;
        std::cout << "Enter username: \n";
        std::getline(std::cin, username);
        std::cout << "Enter password: \n";
        std::getline(std::cin, password);
        std::cout << "Enter name: \n";
        std::getline(std::cin, name);
        std::cout << "Enter address: \n";
        std::getline(std::cin, address);
        try
        {
            userService.createUser(username, password, name, address);
            return;
        }
        catch (UsernameAlreadyExistsException &e)
        {
            std::cout << "Something went wrong. Try again. Error message: " << e.what();
        }
    }
}


void App::displayLoginMenu()
{
    while(true)
    {
        std::string username, password;
        std::cout << "Please login. \n";
        std::cout << "Username: \n";
        std::getline(std::cin, username);
        std::cout << "Password: \n";
        std::getline(std::cin, password);
        try
        {
            userService.authenticateUser(username, password);
            User user = userService.getUserByUsername(username);
            loggedInUser = std::make_unique<User>(user);
            break;
        }
        catch (BadCredentials &e)
        {
            std::cout << e.what() << "\n";
        }
    }
    std::cout << "Log in successful. You can now access your accounts.\n";
    displayMenu();
}

void App::displayMenu()
{
    while(true)
    {
        std::cout << "Select an action: \n";
        std::cout << "1. View a list of your accounts\n";
        std::cout << "2. Manage an account \n";
        std::cout << "3. Create a new account \n";
        std::cout << "4. Done \n";
        int action = readNextInt();
        switch(action)
        {
        case 1:
            displayAccounts();
            break;
        case 2:
            selectAccountDialogue();
            break;
        case 3:
            createAccountMenu();
            break;
        case 4:
            return;
        default:
            std::cout << "Invalid action. Try again\n";
        }
    }
}

void App::displayAccounts()
{
    std::vector<std::shared_ptr<Account>> accounts = accountService.findAccountsByUsername(loggedInUser->getUsername());
    std::cout << "Here is a list with your accounts:\n";
    for(auto& it : accounts)
        std::cout << it << "\n";
}


void App::selectAccountDialogue()
{
    std::cout << "Enter the id of the account you want to manage:\n";
    int accountId = readNextInt();
    try
    {
        currentAccount = accountService.findAccountById(accountId);
    }
    catch (AccountNotFoundException e)
    {
        std::cout << e.what();
        return;
    }
    manageAccountMenu();
}

void App::manageAccountMenu()
{
    std::cout << "managing account.";
}

void App::createAccountMenu()
{
    int choice = 0;

    while(choice < 1 || choice > 3)
    {
        std::cout << "What account type do you want to create? \n";
        std::cout << "1. CheckingAccount \n";
        std::cout << "2. CreditAccount \n";
        std::cout << "3. CheckingAccount \n";
        choice = readNextInt();
        if(choice < 1 || choice > 3)
            std::cout << "Incorrect input. Try again \n";
    }
    switch (choice)
    {
    case 1:
        createCheckingAccountMenu();
        break;
    case 2:
        createCreditAccountMenu();
        break;
    case 3:
        createSavingsAccountMenu();
        break;
    default:
        std::cout << "This should be unreachable";
    }
}

void App::createCheckingAccountMenu()
{
    std::shared_ptr<Account> account = AccountFactory::createAccount("CHECKING", loggedInUser);
    accountService.addAccount(account);
    std::shared_ptr<CheckingAccount> checkingAccount = std::dynamic_pointer_cast<CheckingAccount>(account);
    std::cout << checkingAccount;
}

void App::createCreditAccountMenu()
{

}

void App::createSavingsAccountMenu()
{

}







void App::displayAdminMenu()
{

}

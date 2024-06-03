//
// Created by Moise Alexandru on 6/3/2024.
//

#include "App.h"

#include <algorithm>
#include <iostream>

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

}


void App::displayLoginMenu()
{
    while(true)
    {
        std::cout << "Please login.";
    }
}

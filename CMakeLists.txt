cmake_minimum_required(VERSION 3.28)
project(bank_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(bank_cpp main.cpp
        Entities/User/User.cpp
        Entities/User/User.h
        Repositories/UserRepository/UserRepository.cpp
        Repositories/UserRepository/UserRepository.h
        Exceptions/UsernameAlreadyExistsException.h
        Exceptions/UserNotFoundException.h
        Entities/Transactions/Transaction/Transaction.cpp
        Entities/Transactions/Transaction/Transaction.h
        Entities/Transactions/Deposit/Deposit.cpp
        Entities/Transactions/Deposit/Deposit.h
        Entities/Transactions/Withdrawal/Withdrawal.cpp
        Entities/Transactions/Withdrawal/Withdrawal.h
        Entities/Transactions/AccountToAccount/AccountToAccount.cpp
        Entities/Transactions/AccountToAccount/AccountToAccount.h
        Entities/Accounts/Account/Account.cpp
        Entities/Accounts/Account/Account.h
        Exceptions/IllegalAmountException.h
        Repositories/AccountRepository/AccountRepository.cpp
        Repositories/AccountRepository/AccountRepository.h
        App/App.cpp
        App/App.h
        Services/UserService/UserService.cpp
        Services/UserService/UserService.h
        Exceptions/BadCredentials.h
        Services/AccountService/AccountService.cpp
        Services/AccountService/AccountService.h
        Exceptions/AccountNotFoundException.h)

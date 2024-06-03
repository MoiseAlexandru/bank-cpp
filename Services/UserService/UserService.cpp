//
// Created by Moise Alexandru on 6/3/2024.
//

#include "UserService.h"


UserService& UserService::getInstance()
{
    static UserService instance;
    return instance;
}

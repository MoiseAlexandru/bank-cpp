#include <iostream>

#include "App/App.h"

int main()
{
    App& app = App::getInstance();
    app.run();
    return 0;
}

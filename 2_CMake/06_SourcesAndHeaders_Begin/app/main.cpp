#include <iostream>
#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;
    PrintHelloWorld();
    return 0;
}

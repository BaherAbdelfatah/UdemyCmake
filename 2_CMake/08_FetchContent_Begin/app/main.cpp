#include <iostream>
#include <spdlog/spdlog.h>
#include <fmt/format.h>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    spdlog::info("Welcome");
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;

    // std::cout << "JSON Lib Version:"
    //     << NLOHMANN_JSON_VERSION_MAJOR << "."
    //     << NLOHMANN_JSON_VERSION_MINOR << "."
    //     << NLOHMANN_JSON_VERSION_PATCH << "\n";

    PrintHelloWorld();
    return 0;
}

#include <iostream>
#include "consts.hpp"

void print_hello_world() {
  std::cout << "Hello world" << std::endl;
}

void print_project_details() {
  std::cout << "Project name : " << PROJECT_NAME << std::endl
            << "Project version : " << PROJECT_VERSION << std::endl;
}
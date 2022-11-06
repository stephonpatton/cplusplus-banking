#include <iostream>
#include "login.h++"
#include "Employee.h++"
#include "UIHandler.h++"

using namespace std;
int main() {
    int option = printMainUI();
    handleOption(option);
//    TODO: Create customer screen and handle different parts of that
    return 0;
}

#include <iostream>
#include "util/login.h++"
#include "Users/Employee.h++"
#include "UI/UIHandler.h++"

using namespace std;
int main() {
    int option = printMainUI();
    handleOption(option);
//    TODO: Create customer screen and handle different parts of that
    return 0;
}

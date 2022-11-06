//
// Created by Patton, Stephon on 11/6/22.
//

#include "UIHandler.h++"
#include <iostream>

using namespace std;

/**
 * Prints the main UI when starting the program. Returns the value printed by the user.
 */
int printMainUI() {
    cout << "1. Admin\n" << "2. Employee\n" << "3. Customer\n" << endl;
    int input = 0;
    cin >> input;
    cout << "Selected: " << input << endl;
    return input;
}

void handleOption(int option) {
    switch(option){
        case 1:
            cout << "Admin selected!" << endl;
            displayAdminMenu();
//            TODO: Admin Screen
            break;
        case 2:
            cout << "Employee Selected!" << endl;
            displayEmployeeMenu();
//            TODO: Employee Screen
            break;
        case 3:
            cout << "Customer Selected!" << endl;
            displayCustomerMenu();
//            TODO: Cx screen
            break;
        default:
            //TODO: Handle this
            break;
    }
}

void displayCustomerMenu() {
    cout << "This is the customer menu" << endl;
}

void displayAdminMenu() {
    cout << "This is the Admin menu" << endl;
}

void displayEmployeeMenu() {
    cout << "This is the employee menu" << endl;
}
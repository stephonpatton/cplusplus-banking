//
// Created by Patton, Stephon on 11/6/22.
//

#include "login.h++"

bool loginUser(const std::string& username, const std::string& password) {
    bool success = false;
    if(username.empty()) {
        std::cout << "Empty" << std::endl;
        return success;
    }
    else {
        std::cout << "Not Empty, username is: " << username << std::endl;
        success = true;
        return success;
    }
}
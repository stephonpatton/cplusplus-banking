//
// Created by Patton, Stephon on 11/6/22.
//

#include <utility>

#include "Employee.h++"

void Employee::setLastName(std::string last) {
    this->lastName = std::move(last);
}

std::string Employee::getLastName() const {
    return this->lastName;
}

void Employee::setFirstName(std::string first) {
    this->firstName = std::move(first);
}

std::string Employee::getFirstName() const {
    return this->firstName;
}

void Employee::setAlias(std::string aliasName) {
    this->alias = std::move(aliasName);
}

std::string Employee::getAlias() const {
    return this->alias;
}

std::string Employee::getPassword() const {
    return this->password;
}

void Employee::setPassword(std::string pass) {
    this->password = std::move(pass);
}



//
// Created by Patton, Stephon on 11/6/22.
//

#ifndef BANKING_SYSTEM_2_EMPLOYEE_H
#define BANKING_SYSTEM_2_EMPLOYEE_H


#include <string>
#include <utility>

class Employee {
public:
    std::string firstName;
    std::string lastName;
    std::string alias;
    std::string password;

    std::string getAlias() const;
    void setAlias(std::string aliasName);

    std::string getFirstName() const;
    void setFirstName(std::string first);

    std::string getLastName() const;
    void setLastName(std::string last);

    std::string getPassword() const;
    void setPassword(std::string pass);
};


#endif //BANKING_SYSTEM_2_EMPLOYEE_H

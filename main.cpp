#include <iostream>
#include "login.h++"
#include "Employee.h++"

using namespace std;
int main() {
    Employee e = *new Employee();
    e.setAlias("stephonpatton");
    cout << "Username: " << e.getAlias() << endl;
    loginUser("stephonpatton", "1231281");
    return 0;
}

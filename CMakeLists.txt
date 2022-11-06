cmake_minimum_required(VERSION 3.23)
project(banking_system_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(banking_system_2 main.cpp util/login.h++ util/login.cpp Users/Employee.cpp Users/Employee.h++ UI/UIHandler.cpp UI/UIHandler.h++ Users/Customer.cpp Users/Customer.h++)

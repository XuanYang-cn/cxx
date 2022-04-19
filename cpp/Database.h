#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Employee.h"

namespace Records{

const int First_Employee_Number = 1000;

class Database{
 public:
    Employee& addEmployee(const std::string& firstName,
                          const std::string& lastName);
    Employee& getEmployee(int employeeNumber);
    Employee& getEmployee(const std::string& firstName,
                          const std::string& lastName);

    void displayAll() const;
    void displayCurrent() const;
    void displayFormer() const;

 private:
    std::vector<Employee> employees;
    int nextEmployeeNumber = First_Employee_Number;
};

}// namespace Records

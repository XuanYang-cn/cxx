#include <iostream>
#include <stdexcept>
#include <string>

#include "Database.h"
#include "Employee.h"

namespace Records{

Employee&
Database::addEmployee(const std::string& firstName, const std::string& lastName){
    Employee e(firstName, lastName);
    e.setEmployeeNumber(nextEmployeeNumber++);
    e.hire();
    employees.push_back(e);

    return employees[employees.size() - 1];
}

Employee&
Database::getEmployee(int employeeNumber){
    for(auto& e : employees) {
        if (e.getEmployeeNumber() == employeeNumber){
            return e;
        }
    }
    throw std::logic_error("No employee found");
}

Employee&
Database::getEmployee(const std::string& firstName, const std::string& lastName){
    for (auto& e : employees) {
        if (e.getFirstName() == firstName && e.getLastName() == lastName) {
            return e;
        }
    }
    throw std::logic_error("No employee found");
}

void
Database::displayAll() const{
    for(const auto& e : employees) {
        e.display();
    }
}

void
Database::displayCurrent() const{
    for(const auto& e : employees) {
        if (e.isHired()){
            e.display();
        }
    }
}

void
Database::displayFormer() const{
    for(const auto& e : employees) {
        if (!e.isHired()){
            e.display();
        }
    }
}

}// namespace Records

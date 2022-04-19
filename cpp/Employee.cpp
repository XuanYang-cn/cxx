#include "Employee.h"
#include <stdexcept>
#include <string>
#include "Employee.h"

namespace Records{

Employee::Employee(const std::string& firstName, const std::string& lastName)
    : firstName(firstName), lastName(lastName){}

void
Employee::promote(int raiseAmount){
    setSalary(getSalary() + raiseAmount);
}

void
Employee::demote(int demeritAmount){
    auto curr = getSalary();
    if (curr < demeritAmount){
        throw std::logic_error("invalid demeritAmount");
    }

    setSalary(curr - demeritAmount);
}

void
Employee::hire(){
    hired = true;
}

void
Employee::fire(){
    hired = false;
}

void
Employee::display() const {
    std::cout << "Employee: " << getLastName() << ", " << getFirstName() << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << (isHired() ? "Current Employee" : "Former Employee") << std::endl;
    std::cout << "Employee Number: " << getEmployeeNumber() << std::endl;
    std::cout << "Salary: $" << getSalary() << std::endl;
    std::cout << std::endl;
}

void
Employee::setFirstName(const std::string& name){
    firstName = name;
}

void
Employee::setLastName(const std::string& name){
    lastName = name;
}

void
Employee::setEmployeeNumber(int number){
    employeeNumber = number;
}

void
Employee::setSalary(int salary){
    salary = salary;
}

const std::string&
Employee::getFirstName() const {
    return firstName;
}

const std::string&
Employee::getLastName() const {
    return lastName;
}

int
Employee::getEmployeeNumber() const {
    return employeeNumber;
}

int
Employee::getSalary() const {
    return salary;
}

bool
Employee::isHired() const {
    return hired;
}
}

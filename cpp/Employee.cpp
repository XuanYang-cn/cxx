#include "Employee.h"
#include <exception>
#include <string>
#include "Employee.h"

namespace Records{

Employee::Employee(const std::string& firstName, const std::string& lastName)
    : firstName(firstName), lastName(lastName){}

void
Employee::promote(int raiseAmount){
    setSalary(getSalary() + raiseAmount)
}

void
Employee::demote(int demeritAmount){
    auto curr = getSalary();
    if (curr < demeritAmount){
        throw std::exception("invalid demeritAmount");
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
    cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
    cout << "-------------------------" << endl;
    cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
    cout << "Employee Number: " << getEmployeeNumber() << endl;
    cout << "Salary: $" << getSalary() << endl;
    cout << endl;
}

void
Employee::setFirstName(const std::string& firstName){
    firstName = firstName;
}

void
Employee::setLastName(const std::string& lastName){
    lastName = lastName;
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

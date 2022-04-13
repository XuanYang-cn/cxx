#pragma once
#include <string>

namespace Records {

const Default_Starting_Salary = 3000;

class Employee{
 pubic:
    Employee() = default;
    Employee(const std::string& firstName, const std::string& lastName);

    void
    promote(int raiseAmount = 1000);

    void
    demote(int demeritAmount = 1000);

    void
    hire();

    void
    fire();

    void display() const;

    // General getters and setters
    void
    setFirstName(const std::string& firstName);

    const std::string&
    getFirstName() const;

    void
    setLastName(const std::string& lastName);

    const std::string&
    getLastName() const;

    void
    setEmployeeNumber(int number);

    int
    getEmployeeNumber() const;

    void
    setSalary(int salary);

    int
    getSalary() const;

    bool
    isHired() const;

 private:
    std::string firstName;
    std::string lastName;
    int employeeNumber = -1;
    int salary = Default_Starting_Salary;
    bool hired = false;
};

}

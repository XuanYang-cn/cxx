#include <iostream>
#include "Employee.h"

int
main(){
    std::cout << "Test Employee class" << std::endl;

    Records::Employee e;
    e.setFirstName("Lisa");
    e.setLastName("Simpson");
    e.setEmployeeNumber(1);
    e.setSalary(1000);
    e.promote();
    e.promote(100);

    e.hire();
    e.display();
    return 0;
}

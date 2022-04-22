#include <iostream>
#include "Database.h"

using namespace Records;

int
main(){
    std::cout << "Test Database class" << std::endl;

    Database myDB;

    Employee& e1 = myDB.addEmployee("Lisa", "Simpson");
    e1.fire();

    Employee& e2 = myDB.addEmployee("Bart", "Simpson");
    e2.setSalary(2000);

    Employee& e3 = myDB.addEmployee("Maggie", "Simpson");
    e3.setSalary(2000);
    e3.promote();

    std::cout << "All employees" << std::endl << std::endl;
    myDB.displayAll();

    std::cout << "Current employees" << std::endl << std::endl;
    myDB.displayCurrent();

    std::cout << "Former employees" << std::endl << std::endl;
    myDB.displayFormer();

    return 0;
}

#include <iostream>
#include <stdexcept>
#include <exception>
#include <string>

#include "Database.h"
#include "Employee.h"

using namespace Records;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);
void doDemote(Database& db);

int
main(){
    Database db;
    bool done = false;

    while(!done) {
        int selection = displayMenu();
        switch(selection){
            case 0:
                done = true;
                break;
            case 1:
                doHire(db);
                break;
            case 2:
                doFire(db);
                break;
            case 3:
                doPromote(db);
                break;
            case 4:
                db.displayAll();
                break;
            case 5:
                db.displayCurrent();
                break;
            case 6:
                db.displayFormer();
                break;
            default:
                std::cout << "Unkonwn commond." << std::endl;
                break;
        }
    }

    return 0;
}

int displayMenu(){
    int selection;
    std::cout << std::endl;
    std::cout << "Employee Database" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "1) Hire a new employee" << std::endl;
    std::cout << "2) Fire an old employee" << std::endl;
    std::cout << "3) Promote an employee" << std::endl;
    std::cout << "4) List all employees" << std::endl;
    std::cout << "5) List current employees" << std::endl;
    std::cout << "6) List former employees" << std::endl;
    std::cout << "0) Quit" << std::endl;
    std::cout << std::endl;
    std::cout << "--->";
    std::cin >> selection;
    return selection;
}

void
doHire(Database& db){
    std::string firstName, lastName;

    std::cout << "First name? " << std::endl;
    std::cin >> firstName;

    std::cout << "Last name? " << std::endl;
    std::cin >> lastName;

    db.addEmployee(firstName, lastName);
}

void
doFire(Database& db){
    int employeeNumber;

    std::cout << "Employee number? " << std::endl;
    std::cin >> employeeNumber;

    try {
        Employee& e = db.getEmployee(employeeNumber);
        e.fire();

        std::cout << "Employee " << employeeNumber << "terminated" << std::endl;
    } catch (const std::logic_error& exception){
        std::cerr << "Unable to terminate employee: " << exception.what() << std::endl;
    }
}

void doPromote(Database& db) {
    int employeeNumber, raiseAmount;
    std::cout << "Employee number? ";
    std::cin >> employeeNumber;

    std::cout << "How much of a raise? ";
    std::cin >> raiseAmount;

    try {
        Employee& e = db.getEmployee(employeeNumber);
        e.promote(raiseAmount);
    } catch (const  std::logic_error& exception) {
        std::cerr << "Unable to promote: " << exception.what() << std::endl;
    }
}

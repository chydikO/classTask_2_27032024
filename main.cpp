#include <iostream>
#include "Employee.h"
#include "Manager.h"
using namespace std;

int main() {
    cout << "-----Create some Employees" << "\n";
    // Create some Employees
    Employee e1("James Bond", 25, "C++ Software Engineer");
    Employee e2("Jane Smith", 35, "Project Manager");

    Manager mgr("Boss", 40);
    mgr.addEmployee(e1);
    mgr.addEmployee(e2);

    cout << "-----Display Manager and Employees" << "\n";
    cout << "Manager: \n";
    mgr.print();

    cout << "\nEmployees:\n";
    for (int i = 0; i < mgr.getNumEmployees(); i++) {
        cout << "Employee " << i + 1 << ":\n";
        mgr.getEmployees(i)->print();
    }

    cout << "--------Add a new worker-------------" << "\n";
    Employee e3("Mark Johnson", 30, "Software Developer");
    mgr.addEmployee(e3);


    cout << "--------Display updated list of Employees-------------" << "\n";
    cout << "\nUpdated Employees:\n";
    for (int i = 0; i < mgr.getNumEmployees(); i++) {
        cout << "Employee " << i + 1 << ":\n";
        mgr.getEmployees(i)->print();
    }

    cout << "--------Delete a worker-------------" << "\n";
    mgr.removeEmployeeByName("John Doe");

    cout << "--------Display updated list of Employees------------" << "\n";
    cout << "\nUpdated Employees after deletion:\n";
    for (int i = 0; i < mgr.getNumEmployees(); i++) {
        cout << "Employee " << i + 1 << ":\n";
        mgr.getEmployees(i)->print();
    }
    return 0;
}

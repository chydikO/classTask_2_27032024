//
// Created by w520 on 27.03.24.
//

#ifndef CLASSTASK_2_27032024_MANAGER_H
#define CLASSTASK_2_27032024_MANAGER_H

#include "Employee.h"
using namespace std;

class Manager {
private:
    string name;
    [[maybe_unused]] int age;
    Employee* employees;
    int numEmployees;
    int capacity;

public:
    // Constructors
    Manager();
    Manager(string  n, int a);
    Manager(const Manager& other);
    // Copy assignment operator
    Manager& operator=(const Manager& other);

    // Getters
    [[nodiscard]] string getName() const;
    [[nodiscard]] int getAge() const;
    [[nodiscard]] const Employee *getEmployees(int i) const;
    [[nodiscard]] int getNumEmployees() const;

    // Setters
    void setName(const std::string& n);
    void setAge(int a);

    // Methods
    void addEmployee(const Employee& e);
    void removeEmployeeByName(const string& basicString);
    void print() const;

    // Destructor
    ~Manager();
};

#endif //CLASSTASK_2_27032024_MANAGER_H

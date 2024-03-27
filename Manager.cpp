//
// Created by w520 on 27.03.24.
//

#include "Manager.h"
#include <utility>
#include <iostream>

using namespace std;

Manager::Manager()
        : age(0), employees(nullptr), numEmployees(0), capacity(0) {}

Manager::Manager(string  n, int a)
        : name(std::move(n)), age(a), employees(nullptr), numEmployees(0), capacity(0) {}

Manager::Manager(const Manager& other)
        : name(other.name), age(other.age),
         employees(new Employee[other.capacity]),
          numEmployees(other.numEmployees), capacity(other.capacity) {
    copy(other.employees, other.employees + other.numEmployees, employees);
}

Manager::~Manager() {
    delete[] employees;
    cout  <<  "\n" << "~Manager" << "\n";
}

string Manager::getName() const {
    return name;
}

int Manager::getAge() const {
    return age;
}

const Employee * Manager::getEmployees(int i) const {
    return employees;
}

int Manager::getNumEmployees() const {
    return numEmployees;
}

void Manager::setName(const std::string& n) {
    name = n;
}

void Manager::setAge(int a) {
    age = a;
}

void Manager::addEmployee(const Employee& e) {
    if (numEmployees >= capacity) {
        // Resizing the array with a larger capacity
        int newCapacity = capacity == 0 ? 1 : capacity * 2;
        auto* newEmployees = new Employee[newCapacity];
        if (employees != nullptr) {
            copy(employees, employees + capacity, newEmployees);
            delete[] employees;
        }
        capacity = newCapacity;
        employees = newEmployees;
    }
    employees[numEmployees] = e;
    ++numEmployees;
}

void Manager::removeEmployeeByName(const std::string& basicString) {
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].getName() == basicString) {
            for (int j = i; j < numEmployees - 1; ++j) {
                employees[j] = employees[j + 1];
            }
            --numEmployees;
            break;
        }
    }
}

void Manager::print() const {
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Employees:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i + 1 << ":\n";
        employees[i].print();
    }
}

// Copy assignment operator
Manager& Manager::operator=(const Manager& other) {
    if (this != &other) {
        name = other.name;
        age = other.age;
        delete[] employees;
        capacity = other.capacity;
        employees = new Employee[capacity];
        numEmployees = other.numEmployees;
        copy(other.employees, other.employees + numEmployees, employees);
    }
    return *this;
}

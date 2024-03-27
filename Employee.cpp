//
// Created by w520 on 27.03.24.
//

#include <iostream>
#include "Employee.h"
using namespace  std;

Employee::Employee() : age(0) {
    name = "";
    position = "";
}

Employee::Employee(const string& n, int a, const string& p)
        : name(n), age(a), position(p) {}

std::string Employee::getName() const {
    return name;
}

int Employee::getAge() const {
    return age;
}

string Employee::getPosition() const {
    return position;
}

void Employee::setName(const std::string& n) {
    name = n;
}

void Employee::setAge(int a) {
    age = a;
}

void Employee::setPosition(const std::string& p) {
    position = p;

}

void Employee::print() const {
    cout << "Name: " << name << "\nAge: " << age
              << "\nPosition: " << position << '\n';
}
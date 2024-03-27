//
// Created by w520 on 27.03.24.
//

#ifndef CLASSTASK_2_27032024_EMPLOYEE_H
#define CLASSTASK_2_27032024_EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    string position;


public:
    // Constructors
    Employee();
    Employee(const std::string& n, int a, const std::string& p);

    // Getters
    [[nodiscard]] string getName() const;
    [[nodiscard]] int getAge() const;
    [[nodiscard]] string getPosition() const;

    // Setters
    void setName(const std::string& n);
    void setAge(int a);
    void setPosition(const std::string& p);

    // Display method
    void print() const;
};

#endif //CLASSTASK_2_27032024_EMPLOYEE_H

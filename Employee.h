// Created by Aman on 2023-07-09.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    double salary;

public:
    // Constructors
    Employee();
    // Default constructor that initializes the employee object with default values.

    Employee(const std::string& name, int age, double salary);
    // Parameterized constructor that initializes the employee object with specified values for name, age, and salary.

    // Getters
    std::string getName() const;
    // Getter function to retrieve the name of the employee.

    int getAge() const;
    // Getter function to retrieve the age of the employee.

    double getSalary() const;
    // Getter function to retrieve the salary of the employee.

    // Setters
    void setName(const std::string& newName);
    // Setter function to set the name of the employee.

    void setAge(int newAge);
    // Setter function to set the age of the employee.

    void setSalary(double newSalary);
    // Setter function to set the salary of the employee.

    // Overloading operators
    bool operator==(const Employee& other) const;
    // Overloaded equality operator to compare two employee objects for equality.

    bool operator!=(const Employee& other) const;
    // Overloaded inequality operator to compare two employee objects for inequality.

    // Overloading input and output stream operators
    friend std::istream& operator>>(std::istream& is, Employee& employee);
    // Overloaded input stream operator to allow input of employee details.

    friend std::ostream& operator<<(std::ostream& os, const Employee& employee);
    // Overloaded output stream operator to allow output of employee details.

    // Additional member functions
    void promote(double raisePercentage);
    // Member function to simulate the promotion of an employee by increasing their salary based on the specified raise percentage.
};

#endif

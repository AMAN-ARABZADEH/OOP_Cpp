// Created by Aman on 2023-07-09.

#include "Employee.h"


// Constructors
Employee::Employee() : name(""), age(0), salary(0.0) {}
// The default constructor initializes the employee object with default values for name, age, and salary.

Employee::Employee(const std::string& name, int age, double salary)
        : name(name), age(age), salary(salary) {}
// The parameterized constructor allows initializing the employee object with specific values for name, age, and salary.


// Getters
std::string Employee::getName() const {
    return name;
}
// The getName function returns the name of the employee.

int Employee::getAge() const {
    return age;
}
// The getAge function returns the age of the employee.

double Employee::getSalary() const {
    return salary;
}
// The getSalary function returns the salary of the employee.


// Setters
void Employee::setName(const std::string& newName) {
    name = newName;
}
// The setName function sets the name of the employee to the specified value.

void Employee::setAge(int newAge) {
    age = newAge;
}
// The setAge function sets the age of the employee to the specified value.

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}
// The setSalary function sets the salary of the employee to the specified value.


// Overloading operators
bool Employee::operator==(const Employee& other) const {
    return (name == other.name && age == other.age && salary == other.salary);
}
// The == operator is overloaded to compare two employee objects for equality. It checks if the name, age, and salary of both objects are equal.

bool Employee::operator!=(const Employee& other) const {
    return !(*this == other);
}
// The != operator is overloaded to compare two employee objects for inequality. It returns the opposite of the == operator.


// Overloading input and output stream operators
std::istream& operator>>(std::istream& is, Employee& employee) {
    std::cout << "Enter employee name: ";
    std::getline(is, employee.name);

    std::cout << "Enter employee age: ";
    is >> employee.age;

    std::cout << "Enter employee salary: ";
    is >> employee.salary;

    // Ignore remaining newline character
    is.ignore();

    return is;
}
// The >> operator is overloaded to allow input of employee details from the input stream. It prompts the user to enter the name, age, and salary of the employee.

std::ostream& operator<<(std::ostream& os, const Employee& employee) {
    os << "Name: " << employee.name << ", Age: " << employee.age
       << ", Salary: " << employee.salary;

    return os;
}
// The << operator is overloaded to allow output of employee details to the output stream. It formats the employee details for printing.


// Additional member functions
void Employee::promote(double raisePercentage) {
    double raiseAmount = salary * raisePercentage / 100;
    salary += raiseAmount;
}
// The promote function simulates the promotion of an employee by increasing their salary based on the specified raise percentage.

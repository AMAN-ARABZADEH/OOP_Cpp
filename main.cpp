#include "Person.h"
#include "BankAccount.h"
#include "Employee.h"
#include "intPtr.h"
#include "Player.h"
// OOP - Object-Oriented Programming
/*
 * Auther: Aman Arabzadeh
 * Date: 2023-07-08
 *  Examples and explanations of OOP - Object-Oriented Programming in C++ for Beginners
 */
// Object-Oriented Programming (OOP) is a programming paradigm that organizes code into objects, which are instances of classes.
// It promotes the concept of encapsulation, inheritance, and polymorphism, allowing for modular and reusable code.

// Classes and Objects
// A class is a blueprint or template that defines the structure and behavior of objects.
// It encapsulates data (attributes) and operations (methods) that can be performed on the data.

// An object is an instance of a class, representing a specific entity in the program.


int main() {
    int a, b, c;
    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;

    // Create an object of IntPtr by calling the constructor with 'a' as an argument
    IntPtr myValue(a);
    std::cout << "myValue: " << myValue.getValue() << std::endl;

    // Call setValue on the object with 'b' as an argument
    myValue.setValue(b);
    std::cout << "myValue after setValue: " << myValue.getValue() << std::endl;

    // Create another object of IntPtr by calling the constructor with 'c' as an argument
    IntPtr mValue2(c);
    myValue = mValue2;  // Use the assignment operator to assign the value of the new IntPtr to the old IntPtr

    // Call getValue on the *old* IntPtr and print to cout, including a new line
    std::cout << "myValue after assignment: " << myValue.getValue() << std::endl;

    // Person class
    Person person1;  // Default constructor called

    // Using the introduce() method of the Person class
    person1.introduce();  // Name: , Age: 0

    // Using the overloaded input stream operator to input data into the person1 object
    std::cout << "Enter details for person1:" << std::endl;
    std::cin >> person1;

    // Using the overloaded output stream operator to output the details of the person1 object
    std::cout << "person1 details: " << person1 << std::endl;

    // BankAccount class
    BankAccount amans_account(12345, "Aman");

    // Depositing funds into the account
    amans_account.deposit(1000.0);

    // Withdrawing funds from the account and storing the remaining balance
    double remaining_balance = amans_account.withdraw(500.0);

    // Printing the remaining balance
    std::cout << "Remaining balance: " << remaining_balance << std::endl;

    // Getting and printing the account details using accessor methods
    std::cout << "Account number: " << amans_account.getAccountNumber() << std::endl;
    std::cout << "Owner's name: " << amans_account.getOwnerName() << std::endl;
    std::cout << "Current balance: " << amans_account.getBalance() << std::endl;
    std::cout << amans_account << std::endl;

    // Employee class
    Employee emp1;
    Employee emp2;

    // Input employee details using overloaded input operator
    std::cout << "Enter details for Employee 1:" << std::endl;
    std::cin >> emp1;

    std::cout << "Enter details for Employee 2:" << std::endl;
    std::cin >> emp2;

    // Output employee details using overloaded output operator
    std::cout << "Employee 1: " << emp1 << std::endl;
    std::cout << "Employee 2: " << emp2 << std::endl;

    // Using overloaded operators
    if (emp1 == emp2) {
        std::cout << "Both employees are the same." << std::endl;
    } else {
        std::cout << "Both employees are different." << std::endl;
    }

    // Promote employee 1 by 10%
    emp1.promote(10.0);
    std::cout << "Employee 1 (after promotion): " << emp1 << std::endl;

    // Player class
    Player player("John", 5, 80);
    std::cout << player << std::endl;

    return 0;
}
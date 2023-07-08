#include "Person.h"
#include "BankAccount.h"
// OOP - Object-Oriented Programming
// Object-Oriented Programming (OOP) is a programming paradigm that organizes code into objects, which are instances of classes.
// It promotes the concept of encapsulation, inheritance, and polymorphism, allowing for modular and reusable code.

// Classes and Objects
// A class is a blueprint or template that defines the structure and behavior of objects.
// It encapsulates data (attributes) and operations (methods) that can be performed on the data.

// An object is an instance of a class, representing a specific entity in the program.


class MyInt {
private:
    int* ptr;  // Member variable

public:
    // Parametrized constructor
    MyInt(int num) : ptr(new int(num)) {
        // ptr = new int(num);  // Dynamically allocate memory for the integer
    }

    // Destructor
    ~MyInt() {
        delete ptr;  // Deallocate the dynamically allocated memory
    }

    // Copy constructor
    MyInt(const MyInt& other) : ptr(new int(*other.ptr)) {
        //  ptr = new int(*other.ptr);  // Perform deep copy of the integer
    }

    // Assignment operator
    MyInt& operator=(const MyInt& rhs) {
        if (this == &rhs) {
            return *this;  // Check for self-assignment
        }

        delete ptr;  // Deallocate existing memory

        ptr = new int(*rhs.ptr);  // Perform deep copy of the integer

        return *this;
    }


    // Setter
    void setValue(int value) {
        *ptr = value;  // Set the value of the integer
    }

    // Getter
    int getValue() const {
        return *ptr;  // Get the value of the integer
    }
};


int main() {
    int a, b, c;
    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;

    // Create an object of MyInt by calling the constructor with 'a' as an argument
    MyInt myValue(a);
    std::cout << "myValue: " << myValue.getValue() << std::endl;

    // Call setValue on the object with 'b' as an argument
    myValue.setValue(b);
    std::cout << "myValue after setValue: " << myValue.getValue() << std::endl;

    // Create another object of MyInt by calling the constructor with 'c' as an argument
    MyInt mValue2(c);
    myValue = mValue2;  // Use the assignment operator to assign the value of the new MyInt to the old MyInt

    // Call getValue on the *old* MyInt and print to cout, including a new line
    std::cout << "myValue after assignment: " << myValue.getValue() << std::endl;


    // Example 1: Person class
    // Creating objects of the Person class
    Person person1;  // Default constructor called

    // Using the introduce() method of the Person class
    person1.introduce();  // Name: , Age: 0

    // Using the overloaded input stream operator to input data into the person1 object
    std::cout << "Enter details for person1:" << std::endl;
    std::cin >> person1;

    // Using the overloaded output stream operator to output the details of the person1 object
    std::cout << "person1 details: " << person1 << std::endl;

    // Example 2: BankAccount class
    // Creating an object of the BankAccount class
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

    return 0;
}

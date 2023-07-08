// Created by Aman on 2023-07-08.
//

#include "Person.h"

// Constructor (default)
// Initializes a Person object with an empty name and age of 0
Person::Person() {
    name = "";
    age = 0;
    std::cout << "Default constructor called." << std::endl;
}

// Constructor (overloaded)
// Initializes a Person object with the provided name and age
Person::Person(const std::string& name, int age) {
    this->name = name;
    this->age = age;
    std::cout << "Parameterized constructor called." << std::endl;
}


// Copy constructor
// Performs a shallow copy of the Person object
Person::Person(const Person& other) : name(other.name), age(other.age) {
    std::cout << "Copy constructor called." << std::endl;
}


// Move constructor
// Moves the data from another Person object, leaving it in a valid but unspecified state
Person::Person(Person&& other) : name(std::move(other.name)), age(other.age) {
    other.name = nullptr;  // Set the source object's name pointer to null
    std::cout << "Move constructor called." << std::endl;
}




// Member function
// Prints the name and age of the Person object
void Person::introduce() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

// Overloading the << operator for output stream
// Allows output of Person object to an ostream
std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << "Name: " << person.name << ", Age: " << person.age;
    return os;
}

// Overloading the >> operator for input stream
// Allows input of Person object from an istream
std::istream& operator>>(std::istream& is, Person& person) {
    std::cout << "Enter name: ";
    is >> person.name;
    std::cout << "Enter age: ";
    is >> person.age;
    return is;
}

//
// Created by amana on 2023-07-08.
//

#ifndef OOP_PERSON_H
#define OOP_PERSON_H

#include <iostream>
#include <string>

// Class declaration for Person
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor (default)
    // Initializes a Person object with an empty name and age of 0
    Person();

    // Constructor (overloaded)
    // Initializes a Person object with the provided name and age
    Person(const std::string& name, int age);

// Copy constructor
// Performs a shallow copy of the Person object
    Person(const Person& other);

    // Move constructor
    // Moves the data from another Person object, leaving it in a valid but unspecified state
    Person(Person&& other);

    // Destructor
    // Cleans up resources and performs necessary cleanup for the Person object
    ~Person();

    // Member function
    // Prints the name and age of the Person object
    void introduce() const;

    // Overloading the << operator for output stream
    // Allows output of Person object to an ostream
    friend std::ostream& operator<<(std::ostream& os, const Person& person);

    // Overloading the >> operator for input stream
    // Allows input of Person object from an istream
    friend std::istream& operator>>(std::istream& is, Person& person);
};

#endif //OOP_PERSON_H

# Object-Oriented Programming Examples 
OOP - Object-Oriented Programming in C++ for beginners

In This repository I try to give five examples of object-oriented programming implemented in C++: `Person`, `BankAccount`, `IntPtr`, `Employee`, and `Player`.

## Object-Oriented Programming (OOP)

Object-oriented programming (OOP) is a programming paradigm that focuses on organizing code into objects, which are instances of classes. 
It allows for the encapsulation of data and behavior into reusable and modular units. 
OOP promotes concepts such as abstraction, inheritance, polymorphism, and encapsulation.

Please note that while these examples demonstrate the fundamentals of OOP, they do not cover all aspects of the paradigm. 
Concepts such as encapsulation, inheritance, polymorphism, and more will be explored in future examples.

## Classes and Objects

A class is a blueprint or template for creating objects. 
It defines the properties (data members) and behaviors (member functions) that objects of that class will have. 
An object is an instance of a class, representing a specific entity with its own set of data and behavior. 
Objects interact with each other by invoking methods and accessing properties defined within their respective classes.

## Example 1: Person Class

The `Person` class represents a person with a name and an age. 
It demonstrates the concepts of constructors (default and parameterized), copy constructor, move constructor, destructor, and operator overloading (<< and >>). 
The `Person` class showcases how to encapsulate data and behavior within a class.

## Example 2: BankAccount Class

The `BankAccount` class represents a bank account with an account number, owner name, and balance. 
It demonstrates the concepts of encapsulation, accessor methods (getters), mutator methods (deposit and withdraw), and operator overloading (<< and >>). 
The `BankAccount` class shows how to model a real-world entity with data and behavior.

## Example 3: IntPtr Class

The `IntPtr` class is a simple implementation of an integer wrapper. 
It dynamically allocates memory to store an integer and provides functionalities for setting and getting its value. 
It showcases the concepts of dynamic memory allocation, copy constructor, destructor, and operator overloading (assignment operator). 
The `IntPtr` class illustrates how to manage resources within a class.

## Example 4: Employee Class

The `Employee` class represents an employee with a name, age, and salary. 
It demonstrates the concepts of encapsulation, constructor overloading, getter and setter methods, operator overloading (==, !=, <<, and >>), and member functions. 
The `Employee` class provides an example of modeling an entity with attributes and behavior specific to employees.

## Example 5: Player Class

The `Player` class represents a player in a game with a name, level, and health. 
It demonstrates the concepts of encapsulation, member functions, and information display. 
The `Player` class provides an example of modeling an entity with attributes and behavior specific to game players.

## Operator Overloading

Operator overloading allows the customization of operators' behavior for user-defined types. 
In the provided examples, the << and >> operators are overloaded to enable input and output of `Person`, `BankAccount`, `Employee`, and `Player` objects.

## Resources

If you want to learn more about object-oriented programming in C++ and deepen your understanding, here are some recommended resources:

- [C++ Primer by Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo](https://www.amazon.com/C-Primer-Stanley-B-Lippman/dp/0321714113)
- [The C++ Programming Language by Bjarne Stroustrup](https://www.amazon.com/C-Programming-Language-4th/dp/0321563840)
- [GeeksforGeeks C++ Object-Oriented Programming](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/)
- [Wikipedia - Object-oriented programming](https://en.wikipedia.org/wiki/Object-oriented_programming)

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.


Feel free to explore the code and experiment with the examples to understand the principles and benefits of object-oriented programming.

//
// Created by Aman on 2023-07-09.
//

#ifndef INTPTR_H
#define INTPTR_H

class IntPtr {
private:
    int* ptr;

public:
    // Parametrized constructor
    IntPtr(int num);

    // Destructor
    ~IntPtr();

    // Copy constructor
    IntPtr(const IntPtr& other);

    // Assignment operator
    IntPtr& operator=(const IntPtr& rhs);

    // Setter
    void setValue(int value);

    // Getter
    int getValue() const;
};

#endif

//
// Created by Aman  on 2023-07-09.
//

#include "intPtr.h"


// Parametrized constructor
IntPtr::IntPtr(int num) : ptr(new int(num)) {}

// Destructor
IntPtr::~IntPtr() {
    delete ptr;
}

// Copy constructor
IntPtr::IntPtr(const IntPtr& other) : IntPtr{*other.ptr}{}

// Assignment operator
IntPtr& IntPtr::operator=(const IntPtr& rhs) {
    if (this == &rhs) {
        return *this;
    }

    delete ptr;
    ptr = new int(*rhs.ptr);

    return *this;
}

// Setter
void IntPtr::setValue(int value) {
    *ptr = value;
}

// Getter
int IntPtr::getValue() const {
    return *ptr;
}


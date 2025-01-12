#include "MyClass.h"
#include <iostream>

MyClass::MyClass(const std::string& name) : name_(name) {}

void MyClass::greet() const {
    std::cout << "Hello, " << name_ << "!" << std::endl;
}

int MyClass::getLibraryVersion() {
    return 1;
}

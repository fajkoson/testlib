#include "MyClass.h"
#include <cassert>
#include <iostream>

int main() {
    MyClass obj("Test");
    obj.greet();
    assert(MyClass::getLibraryVersion() == 1);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}

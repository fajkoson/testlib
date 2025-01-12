#include "MyClass.h"
#include "Utilities.h"

int main() {
    MyClass obj("World");
    obj.greet();

    std::string msg = "This is a test message.";
    Utilities::logMessage(Utilities::toUpperCase(msg));

    return 0;
}

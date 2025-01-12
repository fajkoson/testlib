#include "Utilities.h"
#include <iostream>
#include <algorithm>

namespace Utilities {

std::string toUpperCase(const std::string& input) {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

void logMessage(const std::string& message) {
    std::cout << "[LOG]: " << message << std::endl;
}

}

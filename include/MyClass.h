#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <string>

class MyClass {
public:
    MyClass(const std::string& name);
    void greet() const;
    static int getLibraryVersion();

private:
    std::string name_;
};

#endif // MY_CLASS_H

add_executable(test_MyClass test_MyClass.cpp)
target_link_libraries(test_MyClass PRIVATE MyCppLibrary)
add_test(NAME MyClassTest COMMAND test_MyClass)

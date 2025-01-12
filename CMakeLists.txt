cmake_minimum_required(VERSION 3.21)
project(MyCppLibrary VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Create the library
add_library(MyCppLibrary STATIC src/MyClass.cpp src/Utilities.cpp)

# Install rules
install(TARGETS MyCppLibrary DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)

# Add the main executable (for testing/demo)
add_executable(MyCppLibraryDemo src/Main.cpp)
target_link_libraries(MyCppLibraryDemo PRIVATE MyCppLibrary)

# Add unit tests
enable_testing()
add_subdirectory(tests)

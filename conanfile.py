from conan import ConanFile
from conan.tools.cmake import CMake, cmake_layout
from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain

required_conan_version = ">=2.11.0"

# revision_mode can be hash/scm, hash is default scm is commit

class MyCppLibraryConan(ConanFile):
    name = "MyCppLibrary"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    package_type = "library"
    exports_sources = "*"
    
    options = {
        "shared": [True, False],  # Allows the user to choose shared or static library
    }
    default_options = {
        "shared": False,  # Default is static library
    }
    
    requires = []

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        self.copy("*.h", dst="include", src="include")
        self.copy("*.lib", dst="lib", src="lib")
        self.copy("*.dll", dst="bin", src="bin")

    def package_info(self):
        self.cpp_info.libs = ["MyCppLibrary"]

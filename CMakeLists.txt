cmake_minimum_required(VERSION 3.2)
project(hello_git)

ADD_DEFINITIONS(-std=c++17)

# CMakeLists Hierarchy
# include src/CMakeLists.txt tests/CMakeLists.txt and googletest/CMakeLists.txt(repo's)
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(googletest)

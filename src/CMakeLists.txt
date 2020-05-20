ADD_DEFINITIONS(-std=c++17)

# check all src code can pass compilation
file(GLOB_RECURSE ALL_SRC "" "*.cpp")
add_executable(main ${ALL_SRC})

# HelloWorld
[![Build Status](https://travis-ci.com/ZhenhanGong/HelloWorld.svg?branch=master)](https://travis-ci.com/ZhenhanGong/HelloWorld)

## Add goolgetest submodule
```
$ git submodule add https://github.com/google/googletest.git
```

## Project Structure
CMakeLists Hierarchy:
- CMakeLists.txt
- src/CMakeLists.txt
- tests/CMakeLists.txt
- googletest/CMakeLists.txt


## Set up googletest
1. CMakeLists.txt
```
add_subdirectory(googletest)
```
2. tests/CMakeLists.txt
```
target_link_libraries(test_main gtest gtest_main)
```
3. tests/main.cpp
```
#include <gtest/gtest.h>
TEST(testSuite, test) {
  int x = 1;
  EXPECT_EQ(x, 1);
}
int main(int argc, char * * argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
```

## How to generate compile_commands
```
$ mkdir build
$ cd build
$ cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
$ mv compile_commands.json ..
```

## How to build project
```
$ cd build
$ make -j4
```

## How to run
```
$ cd build
$ src/main
```

## How to run tests
```
$ cd build
$ tests/test_main
```

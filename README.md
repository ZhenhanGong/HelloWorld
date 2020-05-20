# HelloWorld
[![Build Status](https://travis-ci.com/ZhenhanGong/HelloWorld.svg?branch=master)](https://travis-ci.com/ZhenhanGong/HelloWorld)

## Add goolgetest
```
$ git submodule add https://github.com/google/googletest.git
```

## Project Structure
- CMakeLists.txt
- src/CMakeLists.txt
- tests/CMakeLists.txt
- googletest/CMakeLists.txt

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
$ src/main
```

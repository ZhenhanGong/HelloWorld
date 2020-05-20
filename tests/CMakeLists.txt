# Generate a list of files that match the <globbing-expressions> and store it into the <variable>.
file(GLOB TEST_SRC "" "*.cpp")
add_executable(test_main ${TEST_SRC} )
target_link_libraries(test_main gtest gtest_main)

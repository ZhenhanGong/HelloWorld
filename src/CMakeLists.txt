# Generate a list of files that match the <globbing-expressions> and store it into the <variable>.
file(GLOB_RECURSE ALL_SRC "" "*.cpp")
# check all src code can pass compilation
add_executable(main ${ALL_SRC})

# This is the proper way to do it where the add.cpp is used as a library
# cmake_minimum_required(VERSION 3.30)

# set(CMAKE_CXX_STANDARD 20)
# # requires the compiler to use the std I specify, doesn't downgrade on failure
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# # turn off compiler extensions
# set(CMAKE_CXX_EXTENSIONS OFF)

# project(multifile_example)

# # Create the `add` library target
# add_library(add_lib add.cpp)


# # Create the executable
# add_executable(${PROJECT_NAME} main.cpp)

# # link the library to the executable
# target_link_libraries(${PROJECT_NAME} PUBLIC add_lib)

# -------------------------------------------------------------
# This basically recreates the following terminal command but it stores the object files somewhere in CMakeFiles:
# g++ -std=c++20 -c main.cpp add.cpp && g++ main.o add.o -o main
cmake_minimum_required(VERSION 3.30)

project(myproject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} main.cpp add.cpp)

cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(myproj)

# Create the `add` library target
add_library(inputlib input.cpp)

# Create the executable
add_executable(${PROJECT_NAME} main.cpp)

# link the library to the executable
target_link_libraries(${PROJECT_NAME} PUBLIC inputlib)

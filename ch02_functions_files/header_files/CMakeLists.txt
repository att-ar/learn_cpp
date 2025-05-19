# This is the proper way to do it where the add.cpp is used as a library
cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(header_files)

# Create the `add` library target
add_library(add_lib add.cpp includes/add.h) # Add the header file here

# Include the directory containing the header file
target_include_directories(add_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/includes>
  $<INSTALL_INTERFACE:include>
)

# Create the executable
add_executable(${PROJECT_NAME} main.cpp)

# link the library to the executable
target_link_libraries(${PROJECT_NAME} PUBLIC add_lib)

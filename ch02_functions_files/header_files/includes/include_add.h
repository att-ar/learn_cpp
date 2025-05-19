#ifndef HEADER_FILES_INCLUDES_INCLUDE_ADD_H
#define HEADER_FILES_INCLUDES_INCLUDE_ADD_H
/*
Includes add.h so that when main.cpp includes both header files a naming collision should occur
Except that we are now using header guards.
The first time that this header file is #included, it will define HEADER_FILES_INCLUDE_ADD_H as a preprocessor directive
Any other time this is #included, nothing will happen because this if directive won't be fulfilled.
*/
#include "add.h"
#endif

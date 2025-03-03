#ifndef HEADER_FILES_INCLUDES_ADD_H
#define HEADER_FILES_INCLUDES_ADD_H

/*
We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)
    (now we do lol, that's what the ifndef is for)

See include_add.h for more explanation on header guards
*/

// This is the content of the .h file, which is where the declarations go
int add(int x, int y);        // function prototype for add.h with 2 params
int add(int x, int y, int z); // function prototype for add.h with 3 params

#endif

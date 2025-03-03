#include "add.h" // note use of double quotes for importing header files
#include "include_add.h"
#include <iostream>

int main()
{
    int x{9};
    int y{100};
    std::cout << x << " + " << y << " is: " << add(x, y) << '\n';
    int z{10};
    std::cout << x << " + " << y << " + " << z << " is: " << add(x, y, z) << '\n';
    return 0;
}

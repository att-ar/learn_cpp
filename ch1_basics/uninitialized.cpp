#include <iostream>

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

    // implementation-defined behaviour: should be 4 bytes on most machines but it can be 2
    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

    return 0;
}

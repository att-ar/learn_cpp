#include <iostream>

/*
Ask the user to enter three values. The program should then print these values. Add an appropriate comment above function main().
*/
int main()
{
    std::cout << "Enter 3 numbers separated by spaces: ";
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0;
}

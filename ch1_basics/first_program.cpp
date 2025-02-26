#include <iostream>

int main()
{
    /* Ask for integer and multiply by 2 and 3*/
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    std::cout << "Double is: " << x * 2 << '\n';
    std::cout << "Triple is: " << x * 3 << '\n';
    return 0;
}

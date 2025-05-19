#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    return num;
}

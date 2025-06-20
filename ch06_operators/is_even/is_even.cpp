#include <iostream>

constexpr bool isEven(const int num)
{
    return (num % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    if (isEven(num))
        std::cout << num << " is even.\n";
    else
        std::cout << num << " is odd.\n";

    return 0;
}

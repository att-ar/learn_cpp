#include <iostream>
#include <limits>

void print(int x)
{
    std::cout << x << '\n';
}

void quiz1()
{
    std::cout << "Enter a single character: ";
    char letter{};
    std::cin >> letter;
    std::cout << "You entered \'" << letter << "\', which has ASCII code " << static_cast<int>(letter) << '\n';
}

int main()
{
    std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
    std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';

    // explicit type conversion `static_cast<new_type>(expression)`
    // There are other ways to convert types
    // It’s worth noting that the argument to static_cast evaluates as an expression
    // So the argument itself is not affected, instead it is evaluated(as an expression)->converted->returned
    print(static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int

    /* Quiz 1:
    Write a short program where the user is asked to enter a single character.
    Print the value of the character and its ASCII code, using static_cast
    */
    quiz1();
    return 0;
}

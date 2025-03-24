#include <iostream>
#include <limits> // For numeric_limits

/* Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
The program computes the answer on the two numbers the user entered and prints the results.
If the user enters an invalid symbol, the program should print nothing.
*/

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

/* Better version of getDouble, ensures type safety */
double getDoubleFromCin()
{
    double value{};
    while (true)
    {
        std::cout << "Enter a double: ";
        if (std::cin >> value)
        {
            // Input was successfully read as a double
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer of additional text
            return value;
        }
        else
        {
            // Input was not a double
            std::cout << "Invalid input. Please enter a double.\n";
            std::cin.clear();                                                   // Clear the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input up to newline char
        }
    }
}

char getOperation()
{
    std::cout << "Enter +, -, *, or /: ";
    char op{};
    std::cin >> op;
    return op;
}

void applyOperation(double x, double y, char op)
{
    /* n summary:
    C++ char is often used to represent a byte, but its signedness can vary.
    Go byte is always an unsigned 8-bit integer.
    Go's byte is more explicit and less ambiguous */

    double result{};
    bool valid{true};

    switch (op)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        // if (y) - division by zero isn't a problem in C++
        result = x / y;
        break;
    default:
        valid = false;
        break;
    }

    if (valid)
        std::cout << x << " " << op << " " << y << " = " << result << "\n";
}

int main()
{
    applyOperation(getDoubleFromCin(), getDoubleFromCin(), getOperation());
    return 0;
}

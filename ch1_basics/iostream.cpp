#include <iostream>

int main()
{
    // define integer variable x, intialized via direct-list-initialization with value 5
    int x{5};

    // << (insertion operator), >> (extraction operator)
    std::cout << "Value of x is: " << x << std::endl; // the std::endl flushed the `cout` buffer
    std::cout << "Adding this on a new line" << '\n'; // can use '\n' instead because it doesn't flush the buffer
    // Convention: '\n' if separate or "your string here\n" if in the string (but you are allowed to do double quotes around \n)
    std::cout << "The newline is in the same string\n";
    // It is like Go, single ASCII characters in '' quotes are treated differently than when in double quotes

    // Getting input from user
    std::cout << "Enter a number: ";
    // value-initialization (will default to zero of the type, however if you explicitly want 0 then put 0 in the braces)
    int y{};
    std::cin >> y; // Get number from keyboard and assign variable x to it
    std::cout << "You typed the number " << y << '\n';

    // Getting multiple input from user
    std::cout << "Enter two numbers separated by a space: ";
    /*
    Key insight:
    There’s some debate over whether it’s necessary to initialize a variable immediately before you give it a user provided value via another source (e.g. std::cin),
    since the user-provided value will just overwrite the initialization value.
    In line with our previous recommendation that variables should always be initialized, best practice is to initialize the variable first.
    */
    int i{};
    int j{};
    std::cin >> i >> j;
    std::cout << "You entered " << i << " and " << j << '\n';

    // std::cin is also buffered so you can input all your numbers at once lol
    // In the first std::cin (which populates `l`) the user can type 1 2 3
    // and then the three following std::cin calls will not request user input
    std::cout << "Enter three numbers: ";
    int l{};
    std::cin >> l; // grabs the 1
    int m{};
    std::cin >> m; // grabs the 2
    int n{};
    std::cin >> n; // grabs the 3
    std::cout << "You typed " << l << " then " << m << " then " << n << '\n';

    std::cout << "Type in a letter (invalid type since it is not a number)\n";
    int c{};
    std::cin >> c;
    std::cout << "int c will always be 0 if an invalid input is given: " << c << '\n';

    return 0;
}

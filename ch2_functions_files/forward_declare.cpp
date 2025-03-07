#include <iostream>

// forward declaration of add() (using a function declaration)
// you don't need to give the parameters names here.
int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

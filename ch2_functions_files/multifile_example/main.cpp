#include <iostream>

// forward declaration of add() defined in add.cpp
int add(int x, int y);

int main()
{
    int x{9};
    int y{19};
    std::cout << x << " + " << y << " = " << add(x, y) << '\n';
    return 0;
}

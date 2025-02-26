#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value the user entered back to the caller
}

// this parameter is pass by value
// and it gets initialized with the values of the argument via copy assignment
void printDouble(int num)
{
    std::cout << num << " Doubled is: " << num * 2 << '\n';
}

void funcWithUnnamedParam(int /* frequency */)
{
    // frequency used to be used, no warning/error since we removed the name
    // and the comment is a style recommendation
}

int main()
{
    int num{getValueFromUser()}; // initialize num with the return value of getValueFromUser()
    printDouble(num);            // This function call has one argument, the user's input

    // can also do it like this since a value-resolving expression can be used as an argument
    printDouble(getValueFromUser());

    funcWithUnnamedParam(num);

    return 0;
}

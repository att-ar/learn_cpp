#include <string>
#include <iostream>
#include <iomanip>

/* Write a program that asks the user to enter their full name and their age.
As output, tell the user the sum of their age and the number of characters in their name
(use the std::string::length() member function to get the length of the string).
For simplicity, count any spaces in the name as a character.
*/
int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    // will use std::size() since it is c++20
    // but since you have to static cast anyways, std::string::length method is the same
    std::cout << "Your age + length of name is: " << static_cast<int>(std::size(name)) + age << '\n';
    return 0;
}

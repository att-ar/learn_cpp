#include <iostream>
#include <iomanip>
#include <string>

std::string getName(const int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void printOlderPerson(std::string_view name1, const int age1, std::string_view name2, const int age2)
{
    if (age1 > age2)
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    else if (age1 == age2)
        std::cout << name1 << " (age " << age1 << ") is the same age as " << name2 << " (age " << age2 << ").\n";
    else
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
}

int main()
{
    const std::string name1{getName(1)};
    const int age1{getAge(name1)};

    const std::string name2{getName(2)};
    const int age2{getAge(name2)};

    printOlderPerson(name1, age1, name2, age2);

    return 0;
}

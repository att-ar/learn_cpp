#include <cstdint> // for fixed-width integers // for fast and least types
#include <cstddef> // for std::size_t
#include <iostream>

int main()
{
    std::int8_t x{65};      // initialize 8-bit integral type with value 65
    std::cout << x << '\n'; // You're probably expecting this to print 65
    // But it doesn't! The ASCII value for 'A' is 65

    // smallest integer type with at least n bits
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    // fastest integer type to process on the host CPU with at least n bits
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
    std::cout << '\n';

    int y{5};
    std::size_t s{sizeof(y)}; // sizeof returns a value of type std::size_t, so that should be the type of s
    std::cout << s << '\n';

    return 0;
}

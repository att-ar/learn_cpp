#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    bool zeroBit{bits.test(3)};
    bits <<= 1;
    if (zeroBit)
        bits.set(0);
    return bits;
}

std::bitset<4> rotlOpOnly(std::bitset<4> bits)
{
    // const std::bitset<4> eight{0b1000};
    // bool zeroBit{(bits & eight).any()};
    // bits <<= 1;
    // if (zeroBit)
    //     bits |= 1;
    // return bits;

    // actual solution:
    //  bits << 1 does the left shift
    //  bits >> 3 handle the rotation of the leftmost bit
    return (bits << 1) | (bits >> 3);
}

int main()
{
    std::bitset<4> bits1{0b0001};
    std::cout << rotl(bits1) << '\n';
    std::cout << rotlOpOnly(bits1) << '\n';

    std::bitset<4> bits2{0b1001};
    std::cout << rotl(bits2) << '\n';
    std::cout << rotlOpOnly(bits2) << '\n';

    return 0;
}

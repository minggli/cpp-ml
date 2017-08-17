/*
play with integer types with various sizes.
*/
#include <iostream>
#include <cstdint>
#include <iomanip>

void integers() {
    unsigned int x(234);
    // Using an unsigned instead of an int to gain one more bit to represent
    // positive integers is almost never a good idea.
    std::cout << sizeof(x) << std::endl;
    x = 4294967295;
    x += 1;
    std::cout << x << std::endl;
    x = 0;
    x -= 1;
    std::cout << x << std::endl;
}

void floating() {
    float x(23.4);
    std::cout << sizeof(x) << std::endl;
    float y(5.0f);
    std::cout << y << std::endl;
}

// IEEE 754 Floating-Point Standard represents floating point in
// scientific notation 3.14e4

int precision() {
    std::cout << std::setprecision(32); // show 32 digits
    float f = 3.33333333333333333333333333333333333333;
    std::cout << sizeof(f) * 8 << " bits. 1 bit for sign, " <<
                 "8 bits for exponent, 23 bits for signficand." << std::endl;
    std::cout << f << std::endl;
    double d = 3.3333333333333333333333333333333333333;
    std::cout << sizeof(d) * 8 << " bits. 1 bit for sign, " <<
                 "11 bits for exponent, 52 bits for signficand." << std::endl;
    std::cout << d << std::endl;
    double df = 3.3333333333333333333333333333333333333f;
    std::cout << df << std::endl;
    std::cout << "the trailing 'f' truncates default double-precision to " <<
                 "single-precision, even if type allows double." << std::endl;
    return 0;
}

int main() {
    integers();
    floating();
    precision();
}

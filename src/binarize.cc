// convert unsigned int to binary
#include <iostream>
#include <cmath>

unsigned short getInteger() {
    std::cout << "please enter 0 - 255 integer.\n";
    // !!! uint8_t reserved for char instead of 0-255
    unsigned short x;
    std::cin >> x;
    return x;
}

int decrementPrint(unsigned short x, int e) {
    std::cout << ((x >= e) ? "1" : "0");

    if (e == 1) {
        std::cout << std::endl;
        return 1;
    }
    else if (e == std::pow(2, 4) || \
             e == std::pow(2, 8) || \
             e == std::pow(2, 12)) {
        std::cout << " ";
    }
    return ((x >= e) ? decrementPrint(x - e, e / 2):
                       decrementPrint(x, e / 2));
}

int main() {
    unsigned short n;
    n = getInteger();
    decrementPrint(n, std::pow(2, 15));
    return 0;
}

#include "lib.h"
#include <iostream>

bool isEven(int x) {
    return !(x % 2);
}

int main() {
    int x;
    x = getNumber();
    if (isEven(x)) {
        std::cout << x << " is even number.\n";
    } else {
        std::cout << x << " is NOT even number.\n";
    }
    return 0;
}

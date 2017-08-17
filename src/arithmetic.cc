/*
* simple toy programme performing basic arithmetic operations.
*/

#include <iostream>
#include "lib.h"


int getOperation() {
    int op;
    bool isValid = false;
    int validOps[4] = {1, 2, 3, 4};
    std::list <int> validList \
        (validOps, validOps + sizeof(validOps) / sizeof(int));

    while (!isValid) {
        std::cout << "Please enter which operator you want " << \
                     "(1 = +, 2 = -, 3 = *, 4 = /): " << std::endl;
        std::cin >> op;
        isValid = inSequence(op, validList);
    }
    return op;
}

float calculate(int x, int op, int y) {
    if (op == 1) {
        return x + y;
    } else if (op == 2) {
        return x - y;
    } else if (op == 3) {
        return x * y;
    } else {
        return x / y;
    }
}

int main() {
    std::cout << \
        "Hello! This application performs arithmetic operations." \
        << std::endl;
    float a = getNumber();
    int op = getOperation();
    float b = getNumber();
    float rv = calculate(a, op, b);
    std::cout << "The result is: " << rv << std::endl;
    return 0;
}

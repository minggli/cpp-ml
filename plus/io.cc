#include <iostream>

int readNumber() {
    int n;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;
    return n;
}

void writeAnswer(int x) {
    std::cout << "The answer is: " << x << std::endl;
}

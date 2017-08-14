#include <iostream>


int main() {
    std::cout << "Enter a number: "; // ask user for a number
    int x; // no need to initialize x since we're going to overwrite that value on the very next line
    std::cin >> x; // read number from console and store it in x
    std::cout << "You entered " << x << std::endl;
    return 0;
}

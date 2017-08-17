// play ground for literal constants
#include <iostream>


int main() {
    // binary uses 0b11011 = 27; octal uses 012 = 10; hexademcial 0xFF = 255
    int hex(0);
    hex = 0x01;
    std::cout << hex << std::endl;
    hex = 0x02;
    std::cout << hex << std::endl;
    hex = 0x04;
    std::cout << hex << std::endl;
    hex = 0x08;
    std::cout << hex << std::endl;
    hex = 0x10;
    std::cout << hex << std::endl;
    hex = 0x40;
    std::cout << hex << std::endl;
    hex = 0x80;
    std::cout << hex << std::endl;
    hex = 0xFF;
    std::cout << hex << std::endl;
    hex = 0xB3;
    std::cout << hex << std::endl;
    hex = 0xF7'70;
    std::cout << hex << std::endl;

    return 0;
}

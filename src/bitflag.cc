// memory efficient way of storing data
#include <iostream>
#include <bitset>

// global constants
unsigned char options = 0;
const unsigned char option1 = 0x1; // 0b0000'0001
const unsigned char option2 = 0x2;
const unsigned char option3 = 0x4;
const unsigned char option4 = 0x8;
const unsigned char option5 = 0x10;
const unsigned char option6 = 0x20;
const unsigned char option7 = 0x40;
const unsigned char option8 = 0x80;

std::bitset<8> bitAssign (unsigned char options) {
    std::bitset<8> bitString(options);
    return bitString;
}

int main() {
    std::cout << bitAssign(option2 | option7 | option8) << std::endl;
    return 0;
}

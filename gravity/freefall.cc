// toy programme where ball drops
#include <iostream>
#include "constants.h"

uint16_t heightTower() {
    std::cout << "Enter the initial height of the tower in meters: \n";
    uint16_t height;
    // 0 - 65535 meters for a tower
    std::cin >> height;
    return height;
}

float fallenDistance(uint16_t sec) {
    return myConstants::G * sec * sec / 2;
}

void heightPrint(uint16_t sec, float h) {
    if (h > 0) {
    std::cout << "At " << sec << " seconds, the ball is at height: " << h <<
                 " meters\n";
    } else {
        std::cout << "At " << sec << " seconds, the ball is on the ground.\n";
    }
}

int main() {
    const uint16_t hTower(heightTower());
    uint16_t s(0);
    float h; // unsigned h will cause overflow and infinite while loop.
    do {
        h = hTower - fallenDistance(s);
        heightPrint(s, h);
        ++s; //pre-increment add 1 and assign to s i.e. s += 1
    } while (h > 0);
    return 0;
}

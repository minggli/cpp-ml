// toy programme where ball drops
#include <iostream>
#include <cmath>
#include "constants.h"

uint16_t heightTower() {
    std::cout << "Enter the initial height of the tower in meters: \n";
    uint16_t height;
    // 0 - 65535 meters for a tower
    std::cin >> height;
    return height;
}

float fallenDistance(uint16_t sec) {
    return myConstants::G * std::pow(sec, 2) / 2;
}

void heightPrint(uint16_t sec, float h) {
    // std::cout << std::setprecision(1)
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
    float h;
    do {
        h = hTower - fallenDistance(s);
        heightPrint(s, h);
        ++s; //pre-increment add 1 and assign to s i.e. s += 1
    } while (h > 0);
    return 0;
}

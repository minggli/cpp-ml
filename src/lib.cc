#include <iostream>
#include <algorithm>
#include <list>

float getNumber() {
    std::cout << "Please enter a numeric value: \n";
    float val;
    std::cin >> val;
    return val;
}

bool inSequence(float val, std::list<int> array) {
    return std::find(array.begin(), array.end(), val) != array.end();
}

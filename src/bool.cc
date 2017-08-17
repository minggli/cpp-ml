// toy example prime number.
#include <iostream>
#include <list>
#include <algorithm>
#include "lib.h"

int prime[4] = {2, 3, 7, 5};
std::list <int> primeList (prime, prime + sizeof(prime) / sizeof(int));

void evalPrint(bool e) {
    if (e) {
        std::cout << "It is a (smaller than 10) prime number." << std::endl;
    }
    else if (!e) {
        std::cout << "It is NOT a (smaller than 10) prime number." << std::endl;
    }
}

int main () {
    bool b(inSequence(getNumber(), primeList));
    evalPrint(b);
    return 0;
}

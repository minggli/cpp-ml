/*
Write a single-file program (named main.cpp) that reads two separate integers
from the user, adds them together, and then outputs the answer.
*/
#include "io.h"

int main() {
    writeAnswer(readNumber() + readNumber());
    return 0;
}

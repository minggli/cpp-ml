/*
5) Why should you never do the following:
a) int y = foo(++x, x);
b) int x = 7 / -2; // (prior to C++11)
c) int x = -5 % 2; // (prior to C++11)
d) float x = 0.1 + 0.1; if (x == 0.2) return true; else return false;
e) int x = 3 / 0;
*/


/*
a) Because operator++ applies a side effect to x, we should not use x again in
the same expression. In this case, the parameters to function foo() can be
evaluated in any order, so it’s indeterminate whether x or ++x gets evaluated
first. Because ++x changes the value of x, it’s unclear what values will be
passed into the function.

b) Prior to C++11, it’s unclear whether the compiler will round this up to -3
or down to -4.
c) Prior to C++11, it’s unclear whether this will result in 1 or -1
(note: You can still use % 2 for even/odd checking).
d) Floating point errors will cause this to evaluate as false even though it
looks like it should be true.
e) Divide by 0 will crash the program.
*/
#include <iostream>

int main() {
    int x = 7 / -2;
    std::cout << "7 / -2 evaluates to " << x << std::endl;
    x = 7 / 2;
    std::cout << "7 / 2 evaluates to " << x << std::endl;
    int y = -5 % 2;
    std::cout << "-5 % 2 evaluates to " << y << std::endl;
    y = 5 % 2;
    std::cout << "5 % 2 evaluates to " << y << std::endl;
    float a = .1, b = .1;
    std::cout << static_cast<bool>(a + b == .2) << std::endl;
    return 0;
}

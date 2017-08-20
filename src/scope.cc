#include <iostream>
using namespace std;

void test() {
    uint16_t x;
    x = 20;
    cout << x << endl;
    {
        uint16_t x;
        x = 30;
        cout << x << endl;
    }
    cout << x << endl;
}


int main() {
    int x, y;
    cout << "Enter an integer: \n";
    cin >> x;
    cout << "Enter a larger integer: \n";
    cin >> y;
    if (x > y) {
        int temp;
        temp = y;
        y = x;
        x = temp;
        cout << "Swapping the values.\n";
    }
    cout << "The smaller value is " << x << endl;
    cout << "The larger value is " << y << endl;
    return 0;
}

// cast ASCII characters to ord
#include <iostream>

using namespace std;

int main() {
    cout << "enter ASCII characters: \n";
    char ch;
    while(true) {
        cin >> ch;
        cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;
    }
    return 0;
}

// cast ASCII characters to ord
#include <iostream>

using namespace std;


int escape() {
    cout << "\"This is quoted text\"\n";
    cout << "This string contains a single backslash \\\n";
    cout << "6F in hex is char \'\x6F\'\n";
    return 0;
}

int chr() {
    cout << "enter ASCII characters: \n";
    char ch;
    while(true) {
        cin >> ch;
        cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;
    }
    return 0;
}

int main() {
    escape();
    chr();
    return 0;
}

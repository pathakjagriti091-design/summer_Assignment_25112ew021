#include <iostream>
using namespace std;

int main() {
    char str[10];

    cout << "ENTER STRING: ";

    cin >> str;

    for (int i = 0;str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            
        }
    }

    cout << "UPPERCASE = " << str;
    return 0;

}
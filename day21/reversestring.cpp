#include <iostream>
using namespace std;

int main() {
    char str[10];
    int i, length = 0;
    char temp;

    cout << "ENTER STRING: ";
    cin >> str;

    while (str[length] != '\0') length++;

    for (i = 0; i < length/2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "REVERSED STRING = " << str;

    return 0;

}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reverse = "";
    cout << "Enter string: ";
    cin >> str;

    for(int i = str.length() - 1; i >= 0; i--) {
        reverse = reverse + str[i];
    }

    if(str == reverse)
        cout << "PALINDROME";
    else
        cout << "NOT PALINDROME";

    return 0;
}
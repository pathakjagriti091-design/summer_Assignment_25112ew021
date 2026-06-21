#include <iostream>
using namespace std;

int main() {
    char str[10];
    
    int i, length = 0;

    cout << "Enter string: ";
    cin >> str;

    while (str[length] != '\0')length++;

    for (i = length - 1; i >= 0; i--) 
    {
        cout << str[i];
    }


    return 0;


}
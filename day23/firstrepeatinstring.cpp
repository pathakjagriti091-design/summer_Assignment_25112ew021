#include <iostream>
using namespace std;

int main() {

    string str = "easaay";
    int freq[270] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] > 1) {

            cout << "First repeating: " << str[i];
            break;
        }
    }
    return 0;
}
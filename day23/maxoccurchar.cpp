#include <iostream>
using namespace std;

int main() {
    string str = "eeaaasssssyyyyyyy";

    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    int MAXCOUNT = 0;
    char RESULT;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > MAXCOUNT) {
            MAXCOUNT = freq[i];
            RESULT = i;
        }
    }

    cout << "MAX OCCURING IS: " << RESULT;
    return 0;
}
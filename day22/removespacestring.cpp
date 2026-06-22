#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "ENTER STRING: ";
    getline(cin, str);

    int j = 0;

    for(int i = 0; i < str.length();i++) 
    {
        if(str[i] != ' ') 
        {
            str[j] = str[i];
            j++;
        }
    }

    str.resize(j);

    cout << "WITHOUT SPACES: " << str;
    return 0;
}
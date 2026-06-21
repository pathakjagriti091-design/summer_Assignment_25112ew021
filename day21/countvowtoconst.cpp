
#include <iostream>
using namespace std;

int main() {
    char str[10];
    int vowel= 0, constant = 0;

    cout << "ENTER STRINGS: ";
    cin >> str;

    for (int i = 0;str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {

            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowel++;
            else

                constant++;
        }
    }

    cout << "VOWELS ARE  = " << vowel << endl;
    cout << "CONSTANTS ARE = " << constant;

    return 0;

}
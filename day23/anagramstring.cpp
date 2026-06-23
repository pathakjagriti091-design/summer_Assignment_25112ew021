#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s1 = "EVIL", s2 = "VILE";

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2)

        cout << "ANAGRAM";
        
    else

        cout << "NOT ANAGRAM";
}
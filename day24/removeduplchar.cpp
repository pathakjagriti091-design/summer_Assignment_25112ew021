#include <iostream>
using namespace std;

int main()
{
    string s="ISHHAAAAA";

    for(int i=0; i<s.length(); i++)
    {
        bool duplicate=false;

        for(int j=0; j<i; j++)
        {
            if(s[i]==s[j])
            {
                duplicate=true;
                break;
            }
        }

        if(!duplicate)
            cout<<s[i];
    }
}
#include <iostream>
using namespace std;

int main()
{
    string s="I AM THE BEST ";

    string WORD="", LONGEST="";

    for(int i=0;i<=s.length();i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            if(WORD.length()>LONGEST.length())
                LONGEST=WORD;

            WORD="";
        }
        else
        {
            WORD+=s[i];
        }
    }

    cout<<"Longest Word = "<<LONGEST;
}
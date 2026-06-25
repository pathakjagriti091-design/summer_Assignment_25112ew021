#include <iostream>
using namespace std;

int main()
{
  
    string str1="RAMA";
     
    string str2="MARA";

    for(int i=0;i<str1.length();i++)
    {
        char first=str1[0];

        for(int j=0;j<str1.length()-1;j++)
            str1[j]=str1[j+1];

        str1[str1.length()-1] = first;

        if(str1==str2)
        {
            cout<<"ROTATION";
            return 0;
        }
    }

    cout<<"NOT ROTATION";
}
#include <iostream>
using namespace std;

int main()
{
    string word[6]={"sudhanshu","pranshu","subhi","sneha" , "rishi" , " rishika"};

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(word[j].length()>word[j+1].length())
                swap(word[j],word[j+1]);
        }
    }

    for(int i=0;i<6;i++)
        cout<<word[i]<<endl;
}
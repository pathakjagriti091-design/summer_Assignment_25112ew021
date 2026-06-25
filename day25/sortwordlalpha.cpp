#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string NAME[4]={"AJAY","RADHA","ANJU","YOGESH"};

    sort(NAME,NAME+4);

    for(int i=0;i<4;i++){

    

        cout<<NAME[i]<<endl;
    } 
    return 0;
}
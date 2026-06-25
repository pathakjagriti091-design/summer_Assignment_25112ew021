#include <iostream>
using namespace std;

int main()
{ 
    int GROUP1[]={2,4,6};
    int GROUP2[]={1,3,5};
    

    int i=0,j=0;

    while(i<3 && j<3)
    {
        if(GROUP1[i]<GROUP2[j])
            cout<<GROUP1[i++]<<" ";
        else
            cout<<GROUP2[j++]<<" ";
    }

    while(i<3)
        cout<<GROUP1[i++]<<" ";

    while(j<3)
        cout<<GROUP2[j++]<<" ";
        
        return 0;
}
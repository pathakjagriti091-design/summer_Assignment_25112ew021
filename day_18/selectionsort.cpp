#include<iostream>
using namespace std;
int main() {
    int arr[6] = { 5,4,3,2,1,6};
    int n =6;
    
    for ( int i = 0; i < n-1; i++)
    {
        int MININDEX = i;
for(int j =i+1 ; j < n ; j++){
    if (arr[j] < arr[MININDEX])
    {
        MININDEX =j;
    }
    
}
        int TEMP= arr[i];
        arr[i] = arr[MININDEX];
        arr[MININDEX] = TEMP;
        

    }

    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    
return 0;
}

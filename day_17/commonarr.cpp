
#include<iostream>
using namespace std;
int main() {
    int arr1[6] = { 1,2,3,2,5,6};
    int arr2[5] = {7,6,2,1,3};
    
    for ( int i = 0; i < 6; i++)
    {
for(int j =0 ; j < 5; j++ ){
    if (arr1[i] == arr2[j])
    {
        cout << arr1[i] << " ";
        arr2[j] = -1;
        break;

    }
}
    }
return 0;
}
#include<iostream>
using namespace std;
int main() {
    int arr1[6] = { 1,2,3,4,5,6};
    int arr2[5] = {7,6,2,1,8};
    int INTERSECT[3];
    int k = 0;
    for ( int i = 0; i < 6; i++)
    {
for(int j =0 ; j < 5; j++ ){
    if (arr1[i] == arr2[j])
    {
        INTERSECT[k++] = arr1[i];
        break;
    }
}
    }
for(int i = 0; i < k ; i++)
{
    cout << INTERSECT[i] << " ";
}
return 0;

}
         
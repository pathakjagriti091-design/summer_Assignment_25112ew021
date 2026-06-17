#include<iostream>
using namespace std;
int main() {
    int arr1[6] = { 1,2,3,4,5,6};
    int arr2[5] = {7,6,2,1,8};
    int unionarr[11];
    int k = 0;
    for ( int i = 0; i < 6; i++)
    {
        unionarr[k++] = arr1[i];
    }
      for (int i = 0; i < 5; i++)
      {
        bool FOUND=false;

for(int j =0 ; j < k; j++ ){
    if(arr2[i] == unionarr[j])
    {
        FOUND= true;
        break;
    }
}
if (! FOUND)
{
    unionarr[k++] = arr2[i];
}
      }
 
for(int i = 0; i < k ; i++)
{
    cout << unionarr[i] << " ";
}
return 0;

}
         
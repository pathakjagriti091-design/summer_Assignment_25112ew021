#include<iostream>
using namespace std;
int main() {
    int arr1[6] = { 1,2,3,4,5,6};
    int arr2[4] = {7,8,9,10};
    int merged[10];
    for ( int i = 0; i < 10; i++)
    {
        if (i < 6)
        {
            merged[i] = arr1[i];

        }
        else{
        merged [i] = arr2[i-6];
    }
    
}
for ( int i =0 ; i < 10; i++ ){
    cout << merged[i] << " " ;

}
return 0;
}  
         
#include<iostream>
using namespace std;
int main() {
    int arr[6] = { 1,4,2,3,5,6};
    int n =6;
    
    for ( int i = 0; i < n-1; i++)
    {
for(int j =i+1 ; j < n-1-i; j++ ){
    if (arr[j] > arr[j+1])
    {
        int TEMP= arr[j];
        arr[j +1] = TEMP;
        

    }
}
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    
return 0;

}
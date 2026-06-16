#include<iostream>
using namespace std;
int main() {
    int arr[] = { 1,2,3,4,5,6};
    
    int size = 6;
    int target = 7;
    

    for(int i = 0; i < size; i ++){
     for ( int j =  i + 1 ; j < size; j++)
     {
        if (arr[i] + arr[j] == target){
         
        


 
cout<< arr[i] <<" + "  << arr[j] << " = " << target << endl;
        } 
    }
} 

return 0;
}
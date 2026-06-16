#include<iostream>
using namespace std;
int main() {
    int arr[] = { 1,5,3,5,5,6};
    
    int size = 6;
    int target = 7;
    

    for(int i = 0; i < size; i ++){
     for ( int j =  i + 1 ; j < size; j++)
     {
        if (arr[i] ==  arr[j] ){
            for ( int k = j; k < 5; k++)
            {
              arr[k] = arr[k +1];
            }
            size--;
            j--;
         
        


 

        } 
    }
} 
cout << "AFTER REMOVING DUPLICATE ARRAY  = "; 
for (int i = 0; i < size; i++)
{
    cout << arr[i] << " " ;
}

return 0;
}
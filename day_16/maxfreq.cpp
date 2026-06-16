#include<iostream>
using namespace std;
int main() {
    int arr[] = { 1, 2, 2, 4 , 5 , 2};
    
    int size = 6;
    int maxCount = 0;
    int maxElement;

    for(int i = 0; i < size; i ++){

    
     int count = 1 ;
     for ( int j =  i + 1 ; j < size; j++)
     {
        if (arr[i] == arr[j]){
            count++;
        }
     }
     if ( count >  maxCount) {
        maxCount = count;
        maxElement = arr[i];
     }

}
 
cout<< " element with maximum frequency = " << maxCount << endl;
cout << "frequncy =" << maxElement << endl;
return 0;
}
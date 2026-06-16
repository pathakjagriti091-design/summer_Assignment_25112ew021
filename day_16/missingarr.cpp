#include<iostream>
using namespace std;
int main() {
    int arr[] = { 1, 2, 3, 5 , 6 };
    
    int size = 5;
    int n = size + 1;

    int totalSum= n * ( n + 1)/2;
    int arraySum = 0;
    for(int i = 0; i < size; i ++){

    
     arraySum = arraySum + arr[i];

}
int missing = totalSum - arraySum; 
cout<< " missing number is = " << missing << endl;
return 0;
}

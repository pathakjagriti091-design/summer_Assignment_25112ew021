#include <iostream>
using namespace std;

int main() {
    int arr[100], num;

    cout << "Enter size: ";
    cin >> num;

    cout << "Enter elements:";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

     cout << "duplicate elements are: " ; 

    for(int i = 0; i < num; i++) {
        for(int j = i+1 ; j<num; j++ ){
    
        if(arr[i] ==  arr[j]) {

    cout << arr[i]  << endl;
    break;
        }
    }
}
    return 0;
}
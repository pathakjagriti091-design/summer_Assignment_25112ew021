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

    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < num; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second largest = " << second;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[10], freq[10];
    int num;
cout << "enter the size";
cin >> num;

    cout << "Enter elements:";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
        freq[i] = -1;   
    }

    for(int i = 0; i < num; i++) {
        int count = 1;

        if(freq[i] == 0)
            continue;

        for(int j = i + 1; j < num; j++) {
            if(arr[i] == arr[j]) {
                count++ ;
                freq[j]  =0;  
            }
        }
        freq[i] = count;
    }

    cout << "\nFrequency of elements:\n";
    for(int i = 0; i < num; i++) {
        if(freq[i] != 0)
            cout << arr[i] << " = " << freq[i] << endl;
    }

    return 0;
}
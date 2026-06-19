#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[n][n];
    int sum = 0;

    
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }


    for(int i = 0; i < n; i++) {
        sum = sum + A[i][i];   
    }

    cout << "Diagonal sum = " << sum;

    return 0;
}
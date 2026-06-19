#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter rows and columns: ";
    cin >> a >> b;

    int A[a][b], transpose[a][b];

    
    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> A[i][j];
        }
    }

    // Transpose logic
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    // Display transpose
    cout << "Transpose of matrix:\n";
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
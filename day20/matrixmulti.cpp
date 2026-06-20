#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    
    cout<< "Enter rows and columns of first matrix: ";
    cin >> a>> b;

    cout << "Enter rows and columns of second matrix: ";
    cin >> c >>d;

    
    if(b !=c) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cin >> B[i][j];
        }
    }

    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            C[i][j] = 0;
        }
    }

    
    for (int i = 0; i < a; i++) {         
        for (int j = 0; j < d; j++) {     
            for (int k = 0; k < b; k++) { 
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    
    cout << "Resultant matrix is: ";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
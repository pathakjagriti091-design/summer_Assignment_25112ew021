#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int A[10][10];
    bool isSymmetric = true;

    for (int i = 0; i < a; i++)
        for (int j = 0; j <a; j++)
            cin >> A[i][j];

    for (int i = 0; i <a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = false;
            }
        }
    }

    if (isSymmetric)
        cout << " it is Symmetric";
    else
        cout << " IT is not Symmetric";

    return 0;
}
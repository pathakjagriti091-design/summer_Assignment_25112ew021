#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "ENTER ROWS AND COLUMNS: ";
    cin >> a >> b;

    int A[10][10];

    
    cout << "Enter elements:\n";
    for (int i = 0; i <a; i++) {
        for (int j = 0; j <b; j++) {
            cin >> A[i][j];
        }
    }

    
    for (int j = 0; j <b; j++) {
        int sum = 0;   
        for (int i = 0; i <a; i++) {
            sum = sum + A[i][j];
        }
        cout << "SUM OF COLUMN " << j+1 << " = " << sum << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "ENTER ROWS AND COLUMNS: ";
    cin >> a >> b;

    int A[10][10];
    cout << "ENTER ELEMENTS:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> A[i][j];
        }
    }

    
    for (int i = 0; i <a; i++) {
        int SUM= 0;  
        for (int j = 0; j < b; j++) {
            SUM = SUM + A[i][j];
        }
        cout << "SUM OF ROW " << i+1 << " = " << SUM << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i;

    cout << "Enter  the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    cout << "Array elements are: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
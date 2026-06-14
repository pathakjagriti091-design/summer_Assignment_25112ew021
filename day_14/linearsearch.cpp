#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i, key, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    
    cout << "Enter elements:";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "Enter element for search: ";
    cin >> key;

    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if(found== 0)
    {
        cout << "Element not found";
    }

    return 0;
}
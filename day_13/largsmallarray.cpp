#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i;
    int large ,small ;


    cout << "Enter  the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    large = arr[0];
    small = arr[0];
    
    for(i = 0; i < n; i++)
    {
       if ( arr[i] > large) {
        large = arr[i];
       }
       else{
        small = arr[i];
       }
    }
    cout << "largest =" << large << endl;
    cout << "smallest =" << small << endl;

    return 0;
}
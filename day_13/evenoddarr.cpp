#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i;
    int odd = 0;
    int even = 0;

    cout << "Enter  the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    

    for(i = 0; i < n; i++)
    {
        if ( arr[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "even elements =" << even << endl;
    cout << " odd elements =" << odd << endl;

    return 0;
}
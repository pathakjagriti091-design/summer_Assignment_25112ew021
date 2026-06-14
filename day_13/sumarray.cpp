#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i;
    int s =0;
    float avg;

    cout << "Enter  the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
     avg  =  s/ n;
    cout << "sum =" << s << endl;
    cout << "average = " << avg << endl;
    return 0;
}
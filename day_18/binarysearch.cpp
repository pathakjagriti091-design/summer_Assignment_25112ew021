#include<iostream>
using namespace std;
int main() {
    int arr[10] = { 1, 2, 3,4,5,6,7,8,9,10};
    int n =10;
    int Key= 8;
    int start = 0; int end =n -1;

while (start<= end)
{
    int mid = start+(end-start)/2;
    if (arr[mid] == Key)
    {
        cout<< "FOUND AT CORRECT INDEX"<< mid;
        return 0;
    }
    

else if (Key> arr[mid])
{
start = mid + 1;
}
else
    {
    end = mid -1;

    }
    
}
cout<<"NOT FOUND" ;
return 0;

}

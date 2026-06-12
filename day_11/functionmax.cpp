#include <iostream>
using namespace std;
int max( int a, int b){
    if ( a > b)
    return a;
    else 
    return b;

}
int main (){
    int x , y;

    cout<< " enter  two numbers ";
    cin>> x >>y;
    int result = max (x , y);
    cout<< "max number is:" << result;
    return 0;

}

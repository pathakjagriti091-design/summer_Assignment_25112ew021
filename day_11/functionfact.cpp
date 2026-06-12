#include <iostream>
using namespace std;
int main() {
 long long fact  = 1 ;
 int n ; 
cout << "enter a num : ";
cin >> n ;
if ( n < 0){
    cout << " factorial not defined for negative numbers" ;
}
else{



for (int i = 1; i <= n ; i++){

     fact  = fact *  i ;
}
 cout << " factorial = " << fact;

}
return 0;

}
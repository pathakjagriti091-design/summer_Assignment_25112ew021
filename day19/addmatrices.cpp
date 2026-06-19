
#include<iostream>
using namespace std;
int main() {
    int a , b;
    cout<< "ENTER THE NUMBER OF ROWs AND COLUMNs :";
     cin >> a >> b;
     int arr1[a][b] ,arr2[a][b] , sum[a][b];
     cout << "Enter the element of first matrix:\n ";
    
    for ( int i = 0; i < a; i++)
    {
for(int j =0 ; j < b; j++ ){
    cin >> arr1[i][j];
    

    }
}
    
cout << "Enter the element of second matrix:\n ";
    
    for ( int i = 0; i < a; i++)
    {
for(int j =0 ; j < b; j++ ){
    cin >> arr2[i][j];
    

    }
}
for ( int i = 0; i < a; i++)
    {
for(int j =0 ; j < b; j++ ){
    sum[i][j] = arr1[i][j] + arr2[i][j];    

    }
}
cout << "sum of matrices:\n ";
    
    for ( int i = 0; i < a; i++)
    {
for(int j =0 ; j < b; j++ ){
     cout << sum[i][j] << " " << endl;
    

    }
} 
 return 0;

}
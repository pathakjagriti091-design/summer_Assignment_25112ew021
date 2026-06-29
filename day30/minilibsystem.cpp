#include<iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout<< "ENTER THE NO. OF BOOKS ";
    cin>>number;
    int BOOKID[100];
    string  NAME[100];
    string AUTHOR [100];


for (int i = 0; i < number; i++)
{
    cout << "\nstudent " <<i+1 <<endl;
    cout<<"EnteR BOOK ID: ";
    cin>>BOOKID[i];

    cout<<"Enter BOOK NAME: ";
    cin>>NAME[i];

    cout<<"ENTER AUTHOR: ";
    cin >>AUTHOR[i];

    
}

cout<< "\n*******************MINI LIBRARY***************\n";
for (int i = 0; i < number; i++)

{

        cout<<"\n student "<< 1+1 << endl;
        cout<<"BOOKID : "<< BOOKID[i] <<endl;       
        cout<<"NAME : "<< NAME[i] <<endl;             
        cout<<"AUTHOR : "<< AUTHOR[i] <<endl;       

}

    return 0;
}
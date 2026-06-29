#include<iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout<< "ENTER THE NO. OF EMPLOYEES ";
    cin>>number;
    int ID[100];
    string  NAME[100];
    string SALARY[100];


for (int i = 0; i < number; i++)
{
    cout << "\nstudent " <<i+1 <<endl;
    cout<<"EnteR ID: ";
    cin>> ID[i];

    cout<<"Enter NAME: ";
    cin>>NAME[i];

    cout<<"ENTER SALARY: ";
    cin >>SALARY[i];

    
}

cout<< "\n*******************EMPLOYEE MANAGEMENT SYSTEM**************\n";
for (int i = 0; i < number; i++)

{

        cout<<"\n student "<< 1+1 << endl;
        cout<<"ID NO.: "<< ID[i] <<endl;       
        cout<<"NAME : "<< NAME[i] <<endl;             
        cout<<"SALARY : "<< SALARY[i] <<endl;       

}

    return 0;
}
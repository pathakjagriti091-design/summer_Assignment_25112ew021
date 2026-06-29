#include<iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout<< "ENTER THE NO. OF STUDENTS ";
    cin>>number;
    int ROLLNUMBER[100];
    string  NAME[100];
    int MARKS[100];
    string SECTION [100];


for (int i = 0; i < number; i++)
{
    cout << "\nstudent " <<i+1 <<endl;
    cout<<"Enter ROLLNUMBER: ";
    cin>>ROLLNUMBER[i];

    cout<<"Enter Name: ";
    cin>>NAME[i];

    cout<<"Enter Marks: ";
    cin>>MARKS[i];

    cout<<"enter section: ";
    cin >>SECTION[i];

    
}

cout<< "\n*******************STUDENT RECORDS***************\n";
for (int i = 0; i < number; i++)

{

        cout<<"\n student "<< 1+1 << endl;
        cout<<"ROLLNUMBER : "<< ROLLNUMBER[i] <<endl;       
        cout<<"NAME : "<< NAME[i] <<endl;       
        cout<<"MARKS : "<< MARKS[i] <<endl;       
        cout<<"SECTION : "<< SECTION[i] <<endl;       

}

    return 0;
}
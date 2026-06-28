#include<iostream>
using namespace std;

struct Student
{
    int ROLLNUMBER;
    char NAME[30];
    int M1, M2, M3, M4, M5, M6, M7;
    int TOTAL;
    float PERCENTAGE;
};

int main()
{
    Student s;

    cout<<"Enter Roll Number: ";
    cin>>s.ROLLNUMBER ;

    cout<<"Enter Name: ";
    cin>>s.NAME;

    cout<<"Enter Marks of 5 Subjects:\n";
    cin>>s.M1>>s.M1>>s.M3>>s.M4>>s.M5 >>s.M6 >>s.M7;

    s.TOTAL = s.M1 + s.M2 + s.M3 + s.M4 + s.M5 +s.M6 + s.M7;

    s.PERCENTAGE = s.TOTAL / 7.0;

    cout<<"\n----- MARKSHEET -----";
    cout<<"\nRoll No : "<<s.ROLLNUMBER;
    cout<<"\nName : "<<s.NAME;

    cout<<"\nMarks:";
    cout<<"\nSubject 1 = "<<s.M1;
    cout<<"\nSubject 2 = "<<s.M2;
    cout<<"\nSubject 3 = "<<s.M3;
    cout<<"\nSubject 4 = "<<s.M4;
    cout<<"\nSubject 5 = "<<s.M5 ;
    cout <<"\nsubject 6 =" <<s.M6;
    cout <<"\nsubject 7 =" <<s.M7;
    cout<<"\nTotal = "<<s.TOTAL;
    cout<<"\nPercentage = "<<s.PERCENTAGE<<"%";

    return 0;
}
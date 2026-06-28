

#include<iostream>
using namespace std;

class Employee
{
    int id;
    char name[30];
    float basic, hra, da, gross;

public:

    void input()
    {
        cout<<"Enter ID: ";
        cin>>id;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Basic Salary: ";
        cin>>basic;
    }

    void calculate()
    {
        hra = basic * 20 / 100;
        da = basic * 10 / 100;
        gross = basic + hra + da;
    }

    void display()
    {
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
        cout<<"\nBasic Salary: "<<basic;
        cout<<"\nHRA: "<<hra;
        cout<<"\nDA: "<<da;
        cout<<"\nGross Salary: "<<gross<<endl;
    }
};

int main()
{
    Employee e;
    int choice;

    do
    {
        cout<<"\n1. Enter Details";
        cout<<"\n2. Calculate Salary";
        cout<<"\n3. Display Details";
        cout<<"\n4. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                e.input();
                break;

            case 2:
                e.calculate();
                break;

            case 3:
                e.display();
                break;

            case 4:
                cout<<"Program End";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}
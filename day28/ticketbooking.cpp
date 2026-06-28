#include<iostream>
using namespace std;

string name;
int seats = 10;
int booked = 0;

void bookTicket()
{
    if(seats>0)
    {
        cin.ignore();
        cout<<"Enter Passenger Name: ";
        getline(cin,name);

        seats--;
        booked++;

        cout<<"Ticket Booked Successfully.\n";
    }
    else
    {
        cout<<"No Seats Available.\n";
    }
}

void cancelTicket()
{
    if(booked>0)
    {
        booked--;
        seats++;

        cout<<"Ticket Cancelled Successfully.\n";
    }
    else
    {
        cout<<"No Ticket to Cancel.\n";
    }
}

void display()
{
    cout<<"\nAvailable Seats : "<<seats<<endl;
    cout<<"Booked Seats : "<<booked<<endl;
}

int main()
{
    int choice;

    do
    {
        cout<<"\n============TICKET BOOKING SYSTEM ============"<<endl;
        cout<<"1. Book Ticket"<<endl;
        cout<<"2. Cancel Ticket"<<endl;
        cout<<"3. Display Seats"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: bookTicket(); break;
            case 2: cancelTicket(); break;
            case 3: display(); break;
            case 4: cout<<"Thank You!"; break;
            default: cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}
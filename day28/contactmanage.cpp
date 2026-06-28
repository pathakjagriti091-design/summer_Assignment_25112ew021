#include<iostream>
#include<string>
using namespace std;

string NAME;
string PHONE;

void CreateContact()
{
    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,NAME);

    cout<<"Enter Phone Number: ";
    getline(cin,PHONE);

    cout<<"Contact Saved Successfully.\n";
}

void displayContact()
{
    cout<<"\nName : "<<NAME<<endl;
    cout<<"Phone Number : "<<PHONE<<endl;
}

void FindContact()
{
    string search;

    cin.ignore();

    cout<<"Enter Name to Search: ";
    getline(cin,search);

    if(search==NAME)
    {
        cout<<"Contact Found\n";
        cout<<"Phone Number : "<<PHONE<<endl;
    }
    else
    {
        cout<<"Contact Not Found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout<<"\n****************CONTACT MANAGEMENT SYSTEM *************"<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Display Contact"<<endl;
        cout<<"3. Search Contact"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: CreateContact(); break;
            case 2: displayContact(); break;
            case 3: FindContact(); break;
            case 4: cout<<"Thank You!"; break;
            default: cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}
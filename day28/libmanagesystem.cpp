#include<iostream>
#include <string>

using namespace std;

int booknumber;
string Name, author;

bool issued = false;

void addBook()
{
    cout<<"Enter Book ID: ";
    cin>>booknumber;
    cin.ignore();
    cout<<"Enter Book Name: ";
    getline(cin, Name);
    cout<<"Enter Author Name: ";
    getline(cin, author);
    issued = false;

    cout<<"Book Added Successfully.\n";
}

void displayBook()
{
    cout<<"\nBook ID : "<<booknumber<<endl;
    cout<<"Book Name : "<<Name<<endl;
    cout<<"Author : "<<author<<endl;

    if(issued){
        cout<<"Status : Issued"<<endl;}
    else{
        cout<<"Status : Available"<<endl;
    }
}

void issueBook()
{
    if(!issued)
    {
        issued = true;
        cout<<"Book Issued Successfully.\n";
    }
    else
    {
        cout<<"Book is Already Issued.\n";
    }
}

void returnBook()
{
    if(issued)
    {
        issued = false;
        cout<<"\nBook Returned Successfully.\n";
    }
    else
    {
        cout<<"\nBook is Already Available.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== Library Management System ====="<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Book"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Return Book"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBook();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                returnBook();
                break;

            case 5:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=5);

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

string name;
int accNo;
float balance = 0;

void Accountcreation()
{
    cout<<"Enter Account Number: ";
    cin>>accNo;

    cin.ignore();

    cout<<"Enter Name of person: ";
    getline(cin,name);

    cout<<"Enter Initial Balance: ";
    cin>>balance;

    cout<<"\nAccount Creation done Successfully.\n";
}

void deposit()
{
    float amount;
    cout<<"Enter Amount to Deposit: ";
    cin>>amount;

    balance = balance + amount;

    cout<<"Amount Deposited Successfully.\n";
}

void withdraw()
{
    float amount;
    cout<<"Enter Amount to Withdraw: ";
    cin>>amount;

    if(amount<=balance)
    {
        balance = balance - amount;
        cout<<"Withdrawal  done Successfully.\n";
    }
    else
    {
        cout<<"Insufficient  Balance amount.\n";
    }
}

void display()
{
    cout<<"\nAccount Number : "<<accNo<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Balance : "<<balance<<endl;
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== Bank Account System ====="<<endl;
        cout<<"1. Accountcreaction"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: Accountcreation(); 
            break;;
            case 2: deposit();
             break;
            case 3: withdraw();
             break;
            case 4: display(); 
            break;
            case 5: cout<<"Thank You!";
             break;
            default: cout<<"Invalid Choice";
        }

    }while(choice!=5);

    return 0;
}
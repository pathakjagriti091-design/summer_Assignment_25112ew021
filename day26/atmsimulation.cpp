#include<iostream>
using namespace std;

int main()
{
    int CHOICE;
    float BALANCE=100000, AMOUNT;

    cin>>CHOICE;

    if(CHOICE==1)
        cout<<BALANCE;

    else if(CHOICE==2)
    {
        cin>> AMOUNT;
        BALANCE += AMOUNT ;
        cout<<BALANCE;
    }

    else if(CHOICE == 3)
    {
        cin>> AMOUNT;

        if(AMOUNT <= BALANCE)
        {
            BALANCE -= AMOUNT;
            cout<< BALANCE;
        }
        else
            cout<<"Insufficient Balance";
    }

    else
        cout<<"Wrong Choice";
        return 0;
}
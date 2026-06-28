
#include<iostream>
#include <string>
using namespace std;

struct employee
{
    
    string  name;
    float salary;
    string address ;
    int age;
};

void addStudent(employee s[], int &n)
{
    cout<<"Enter name: ";
    cin>>s[n].name;

    cout<<"Enter salary: ";
    cin>>s[n].salary;

    cout<<"Enter address: ";
    cin>>s[n].address;

    cout<<"enter age: ";
    cin >> s[n].age;

    n++;
}

void display(employee s[], int n)
{
    cout<<"Student Records\n";

    for(int i=0; i<n; i++)
    {
        cout<<s[i].name<<" "<<s[i].salary<<" " <<s[i].address<<" " << s[i].age<<endl;

    }
}

int main()
{
    employee s[100];
    int n=0, CHOICE;

    do
    {
        cout<<"\n1.Add";
        cout<<"\n2.Display";
        cout<<"\n3.Exit";

        cin>>CHOICE;

        switch(CHOICE)
        {
            case 1:
                addStudent(s, n);
                break;

            case 2:
                display(s, n);
                break;

            case 3:
                cout<<"Exit";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(CHOICE!=3);

    return 0;
}


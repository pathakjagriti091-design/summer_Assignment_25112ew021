#include<iostream>
#include <string>
using namespace std;

struct STUDENT
{
    int ROLLNUMBER;
    string  NAME;
    int MARKS;
    string SECTION ;
};

void addStudent(STUDENT s[], int &n)
{
    cout<<"Enter ROLLNUMBER: ";
    cin>>s[n].ROLLNUMBER;

    cout<<"Enter Name: ";
    cin>>s[n].NAME;

    cout<<"Enter Marks: ";
    cin>>s[n].MARKS;

    cout<<"enter section: ";
    cin >> s[n].SECTION;

    n++;
}

void display(STUDENT s[], int n)
{
    cout<<"Student Records\n";

    for(int i=0; i<n; i++)
    {
        cout<<s[i].ROLLNUMBER<<" "<<s[i].NAME<<" " <<s[i].MARKS<<" " << s[i].SECTION<<endl;

    }
}

int main()
{
    STUDENT s[100];
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


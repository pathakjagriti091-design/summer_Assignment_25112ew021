#include<iostream>
using namespace std;

int main(){
int ch;
float n1 ,n2;

do
{



            cout<<"\1.add"<<endl;
        cout<<"\2. subtract"<<endl;
        cout<<"\3. multiply"<<endl;
        cout<<"\4. divide"<<endl;
        cout<<"\5. Exit"<<endl;

    cout<<"Enter choice: ";
    cin>>ch;

    if(ch >= 1 && ch<=4)
    {
        cout<<"Enter two numbers: ";
        cin>>n1 >>n2;
        }
    

        switch(ch)
        {
            case 1:
               cout << "addition =  " <<n1+ n2;
                break;

            case 2:
                cout<< "subtraction =  " << n1 - n2;
                break;

            case 3:
                cout << " multiplication = " << n1* n2;
                break;

            case 4:
                cout << "division =  " << n1/n2;
                break;

            case 5:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(ch!=5);

    return 0;
}
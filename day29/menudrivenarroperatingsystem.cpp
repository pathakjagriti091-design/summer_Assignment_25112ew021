
#include<iostream>

using namespace std;

int main()
{
    
    int n , ch , maximum;
    int a[50];

    do
    {
        
        cout<<"\n1.Add";
        cout<<"\n2.Display";
        cout<< "\n3. maximum";
        cout <<"\n4.Exit";

        cout<<"\n Enter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                 cout<<"enter size: ";
                cin>> n;
                for (int i = 1; i < n; i++)
                {
                   cin>> a[i];
                }
                break;
                

            case 2:
                for (int i = 1; i < n; i++)
                {
                    cout << a[i]<< " ";
                }
                
                break;

            case 3:
                maximum = a[0];
                for (int i = 1; i < n; i++)
                {
                    if (a[i > maximum])
                    {
                        maximum = a[i];
                    }
                    
                }
                cout << " maximum = " << maximum;
                break;

                case 4:
cout << "thank you" ;

            default:
                cout<<"Invalid Choice";
        }

    }while(ch!=4);

    return 0;
}


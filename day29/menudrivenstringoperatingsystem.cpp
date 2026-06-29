
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    int  ch;
    string s;

    do
    {
        
        cout<<"\n1.Add";
        cout<<"\n2.Display";
        cout<< "\n3. length";
        cout <<"\n4.Exit";

        cout<<"\n Enter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                 cout<<"enter string: ";
                cin>>s;
                break;
                

            case 2:
        
                    cout << "string =  " << s;
                break;

            case 3:
                
                cout << "length = " << s.length();
                break;

                case 4:
cout << "thank you" ;

            default:
                cout<<"Invalid Choice";
        }

    }while(ch!=4);

    return 0;
}


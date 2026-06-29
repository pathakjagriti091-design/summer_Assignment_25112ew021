#include<iostream>
#include<string>
using namespace std;

int main()
{
    string pname[50];
    int qty[50];
    float price[50];

    int n=0,ch;
    string search;

    do
    {
        cout<<"\n1.Add Product";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Exit";

        cout<<"\nEnter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:

                cout<<"Enter Product Name: ";
                cin>>pname[n];

                cout<<"Enter Quantity: ";
                cin>>qty[n];

                cout<<"Enter Price: ";
                cin>>price[n];

                n++;
                break;

            case 2:

                for(int i=0;i<n;i++)
                {
                    cout<<"\nProduct : "<<pname[i];
                    cout<<"\nQuantity : "<<qty[i];
                    cout<<"\nPrice : "<<price[i]<<endl;
                }

                break;

            case 3:

                cout<<"Enter Product Name: ";
                cin>>search;

                for(int i=0;i<n;i++)
                {
                    if(pname[i]==search)
                    {
                        cout<<"\nProduct Found";
                        cout<<"\nQuantity : "<<qty[i];
                        cout<<"\nPrice : "<<price[i];
                    }
                }

                break;

            case 4:
                cout<<"Thank You";
        }

    }while(ch!=4);

    return 0;
}
#include<iostream>
using namespace std;

int main()

{
    int hunt = 18;
    int numberguess;
    do
    {
       cout<< "ENTER GUESS  NUMBER: ";
       cin>> numberguess;
       if(numberguess > hunt) 
       
       cout<<"TOO HIGH\n" ;
       
       else if (numberguess < hunt)

       
        cout<< " TOO LOW\n" ;

       
       else
       
          cout<< "correct guess" ;
        
    }

       while (numberguess != hunt);
       return 0;
      
}
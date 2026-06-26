#include<iostream>
using namespace std;

int main()
{
    string question[2]={
        "PRIME MINISTER OF INDIA?",
        "4*3=?"
    };

    string option1[2]={"ZAKIR KHAN","12"};
    string option2[2]={"NARENDRA MODI","8"};
    string option3[2]={"SALMAN KHAN ","5"};

    int correct[2]={1,2};

    int score=0;
    int ans;

    for(int i=0;i<2;i++)
    {
        cout<<question[i]<<endl;
        cout<<"1."<<option1[i]<<endl;
        cout<<"2."<<option2[i]<<endl;
        cout<<"3."<<option3[i]<<endl;

        cin>>ans;

        if(ans==correct[i])
            score++;
    }

    cout<<"Score = "<<score;
}
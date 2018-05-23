#include<iostream>
using namespace std;


int main()
{

    int n;
    char s[100],s2[100];
    cin>>n>>s>>s2;
    if(s2[0]=='w')
    {

        if(n==5||n==6)
        {
            cout<<"53"<<endl;
        }
        else
        {
            cout<<"52"<<endl;
        }

    }

    else
    {

        if(n==30)
        {
            cout<<"11"<<endl;
        }
        else if(n<=29)
        {
            cout<<"12"<<endl;
        }
        else
        {

            cout<<"7"<<endl;

        }

    }
    return 0;

}

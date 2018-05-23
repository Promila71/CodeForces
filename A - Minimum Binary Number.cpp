#include <iostream>

using namespace std;

int main()
{

    char c[10001];
    int n,num=0,i,num2=0;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {

        if(c[i]=='0')
        {
            num++;
        }
        if(c[i]=='1')
        {
            num2++;
        }

    }
    if(num2!=0)
    {

        cout<<"1";

    }

    for(i=0;i<num;i++)
    {

        cout<<0;

    }

    return 0;
}

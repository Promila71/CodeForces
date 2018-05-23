#include<iostream>

using namespace std;

int main()
{
    int n,m,p;
    cin>>n;
    if(n>0)
    {
        cout<<n;
    }
    else
    {
        m=n/10;
        p=(n/100)*10+n%10;
        if(m>p)
        {
            cout<<m;
        }
        else
        {
            cout<<p;
        }
    }
    return 0;
}

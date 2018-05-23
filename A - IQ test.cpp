#include <iostream>

using namespace std;

int main()
{
    int n,i,m,p,od=0,ev=0;
    int ara[1080];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==1)
        {
            m=i;
            od++;
        }
        else
        {
            p=i;
            ev++;
        }
    }
    if(od==1)
    {
        cout<<m+1;
    }
    else if(ev==1)
    {
        cout<<p+1;
    }
    return 0;
}

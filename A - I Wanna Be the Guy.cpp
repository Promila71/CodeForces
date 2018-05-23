#include <iostream>

using namespace std;

int main()
{
    int i,n,x,y,p;
    long long int ara[105];
    cin>>n>>x;
    for(i=0;i<x;i++)
    {
        cin>>y;
        ara[y]=1;
    }
    cin>>p;
    for(i=0;i<p;i++)
    {
        cin>>y;
        ara[y]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]!=1)
        {
            cout<<"Oh, my keyboard!";
            return 0;

        }

    }
    cout<<"I become the guy.";

}

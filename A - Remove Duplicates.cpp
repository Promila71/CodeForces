#include <iostream>

using namespace std;

int main()
{

    int n,ara[55],i,j,k;
    cin>>n;
    k=n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=n-1;i>=0;i--)
    {

        if(ara[i]==-1)
        {
            continue;
        }
        for(j=i-1;j>=0;j--)
        {
            if(ara[j]==ara[i])
            {
                ara[j]=-1;
                k--;
            }
        }

    }
    cout<<k<<endl;
    for(i=0;i<n;i++)
    {
        if(ara[i]!=-1)
        {
            cout<<ara[i]<<" ";
        }

    }
    return 0;

}

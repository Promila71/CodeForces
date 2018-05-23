#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,j;
    int ara[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i]==j)
            {
                cout<<i+1<<endl;
            }
        }
    }

    return 0;
}

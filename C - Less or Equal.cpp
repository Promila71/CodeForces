#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{

    int ara [200000];
    int i,p,n,k;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    if(k==0)
    {
        p=ara[0]-1;
        if(p<1)
        {
            p=-1;
        }
    }
    else
    {

        if(ara[k]==ara[k-1])
        {
            p=-1;
        }
        else
        {
            p=ara[k-1];
        }

    }
    cout<<p;
    return 0;

}

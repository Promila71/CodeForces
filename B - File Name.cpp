#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string.h>

using namespace std;
int main()
{
    int n,i,cnt=0,ans=0;
    char ara[105];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]=='x')
        {
            cnt++;
        }
        else
        {
            if(cnt>2)
            {
                ans=ans+(cnt-2);
            }
            cnt=0;
        }
    }
    if(cnt>2)
    {
        ans=ans+(cnt-2);
    }
    cout<<ans<<endl;

    return 0;

}

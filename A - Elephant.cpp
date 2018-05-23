#include <bits/stdc++.h>

using namespace std;

int main()
{

    int ara[10001];
    int i,m,n,x;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {

        cin>>x;
        ara[x]++;

    }
    sort(ara+1,ara+n+1);
    cout<<ara[1]<<endl;
    return 0;

}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,i;
    int ara[1001];
    cin>>a>>b>>c;
    ara[0]=a*b*c;
    ara[1]=a+b+c;
    ara[2]=a*(b+c);
    ara[3]=(a+b)*c;
    ara[4]=0;
    for(i=0;i<4;i++)
    {
        ara[4]=max(ara[i],ara[4]);
    }
    cout<<ara[4];


    return 0;
}

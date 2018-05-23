#include <iostream>

using namespace std;

int main()
{

    int n,i,ara[1200]={0},max=0,count=0,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        ara[x]++;
    }
    for(i=1;i<=1000;i++)
    {
        if(max<ara[i])
        {
            max=ara[i];
        }
        if(ara[i]>0)
        {
            count++;
        }
    }
    cout<<max<<" "<<count<<endl;
    return 0;

}

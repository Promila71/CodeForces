#include <iostream>

using namespace std;

int main()
{
    int ara[6005][5];
    int k,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        ara[0][k]++;
        ara[ara[0][k]][k]=i;
    }
    n=min(ara[0][1],ara[0][2]);
    n=min(n,ara[0][3]);
    cout<<n<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<ara[i][1]<<" "<<ara[i][2]<<" "<<ara[i][3]<<endl;
    }


}

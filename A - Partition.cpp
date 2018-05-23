#include <iostream>

using namespace std;

int main()
{
    int ara[105];
    int n,i,sum=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]<=0)
        {
            sum2=sum2+ara[i];
        }
        else if(ara[i]>0)
        {
            sum=sum+ara[i];
        }
    }
    cout<<sum-sum2<<endl;

    return 0;
}

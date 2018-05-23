#include <iostream>

using namespace std;

int main()
{


    int n,i,ara[200001],sum=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>ara[i];
        sum=sum+ara[i];

    }
    sum=(sum+1)/2;
    for(i=0;i<n;i++)
    {

        sum2=sum2+ara[i];
        if(sum<=sum2)
        {

            cout<<i+1<<endl;
            break;

        }

    }
    
    return 0;


}

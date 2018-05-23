#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,count=0,a,b;
    int ara[105],ara2[105];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        ara[i]=a;
        ara2[i]=b;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i]==ara2[j])
            {
                count++;
            }
        }
    }
    printf("%d\n",count);

    

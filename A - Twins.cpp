#include <bits/stdc++.h>

using namespace std;

int main()

{


    int ara[100];
    int i,sum=0,count=0,get=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&ara[i]);

    }

    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {

        sum=sum+ara[i];
    }

    sum=sum/2;
    while(get<=sum)
    {

        count++;
        get=get+ara[n-count];

    }
    printf("%d\n",count);


}

#include <stdio.h>


int main()
{

    int i,ar[6],j=0,x,count=0,len;
    char ara[100];
    scanf("%s",ara);
    len=strlen(ara);
    for(i=0; i<len; i++)
    {
        if(ara[i]=='h')
        {
            ar[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<len; i++)
    {
        if(ara[i]=='e')
        {
            ar[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<len; i++)
    {
        if(ara[i]=='l')
        {
            ar[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<len; i++)
    {
        if(ara[i]=='l')
        {
            ar[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<len; i++)
    {
        if(ara[i]=='o')
        {
            ar[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=0; i<j-1; i++)
    {
        if(ar[i]<ar[i+1])
            count++;
    }
    if(count==4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

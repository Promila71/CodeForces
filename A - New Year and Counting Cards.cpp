#include <bits/stdc++.h>

using namespace std;

int main()
{

    char ar[52];
    int i,count=0,len;
    scanf("%s",ar);
    len=strlen(ar);
    for(i=0;i<len;i++)
    {
        if(ar[i]>='0'&&ar[i]<='9')
        {
            if(ar[i]%2==1)
            {
                count++;
            }
        }
        else if(ar[i]>='a'&&ar[i]<='z')
        {
            if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u')
            {
                count++;
            }
        }

    }
    printf("%d\n",count);

    return 0;


}

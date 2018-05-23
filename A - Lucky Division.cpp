#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ara[]={4,7,44,77,47,74,447,444,474,777,747,477}; //lucky numbers
    int count=0,n,i;
    scanf("%i",&n); //input a number
    for(i=0;i<12;i++)
    {

        if(n==ara[i]||n%ara[i]==0)
        {

            printf("YES\n");
            break;


        }
        else
        {

            count++;

        }

    }
    if(count==12)
    {

        printf("NO\n");

    }
    return 0;

}

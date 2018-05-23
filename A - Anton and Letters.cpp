#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,count=0,len;
    char s[1005];
    gets(s);
    len=strlen(s);
    for(i='a';i<='z';i++)
    {
        for(j=0;j<len;j++)
        {
            if(s[j]==i)
            {
                count++;
                break;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}

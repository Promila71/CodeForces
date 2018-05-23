#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[205];
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
        }
        else
        {
            printf("%c",s[i]);
            if(s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B')
        {
            printf(" ");
        }
        }
    }
    return 0;
}

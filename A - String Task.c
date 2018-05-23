#include <stdio.h>
#include <string.h>

main()
{


    char ara[99];
    int i,len;
    scanf("%s",ara);
    len=strlen(ara);
    for(i=0;i<len;i++)
    {

        if (ara[i]>=65&&ara[i]<=90)
        {

            ara[i]=ara[i]+32;

        }
        if(ara[i]=='a'||ara[i]=='e'||ara[i]=='i'||ara[i]=='o'||ara[i]=='u'||ara[i]=='A'||ara[i]=='E'&&ara[i]=='I'||ara[i]=='O'||ara[i]=='U'||ara[i]=='y'||ara[i]=='Y')
        {

            continue;

        }
        else
        {

            printf(".%c",ara[i]);

        }

    }




}

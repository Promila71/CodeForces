#include <stdio.h>
#include <string.h>

main()
{

    char ara[100];
    char ara2[100];
    int i,len;
    scanf("%s",ara);
    scanf("%s",ara2);
    for(i=0;i<strlen(ara);i++)
    {

        ara[i]=tolower(ara[i]);
        ara2[i]=tolower(ara2[i]);

    }
    len=strcmp(ara,ara2);
    if(len==0)
    {

        printf("0");

    }
    else if(len<0)
    {


        printf("-1");


    }
    else if(len>0)
    {


        printf("1");


    }

}

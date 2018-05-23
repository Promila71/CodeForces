#include <stdio.h>
#include <string.h>

main()
{

    char ara[100];
    int i,n,len,j;
    scanf ("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%s",ara);
        len=strlen(ara);
        if(len<=10)
        {

            printf("%s\n",ara);

        }
        else
        {

            for(j=0;j<len;j++)
            {
                printf("%c%d%c\n",ara[0],len-2,ara[len-1]);
                break;
            }

        }


    }

}

#include <stdio.h>
#include <string.h>


main()
{

    int i,j,l,temp;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(j=0;j<l;j=j+2)
    {
    for(i=0;i<=l-j-2;i=i+2)
    {

        if(s[i]>s[i+2])
        {

            temp = s[i];
            s[i] = s[i+2];
            s[i+2] = temp;

        }

    }
    }


        printf("%s",s);


}

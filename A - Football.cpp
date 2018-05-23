#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char str[100];
    int i,count=0;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {

        if(str[i]==str[i+1])
        {

            count++;
            if(count>=6)
        {

            cout<<"YES"<<endl;
            return 0;

        }

        }
        else
        {

            count=0;

        }

    }
    cout<<"NO"<<endl;
    return 0;

}

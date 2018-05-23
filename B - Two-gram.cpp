#include <iostream>

using namespace std;

int main()
{

    int n,count=0,max=0,i,j,a=0;
    char s[105];
    cin>>n>>s;
    for(i=0;i<n-1;i++)
    {
         count=1;
        for(j=i+1;j<n-1;j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                count++;
            }
            if(max<count)
            {

                max=count;
                a=i;

            }

        }

    }

    cout<<s[a]<<s[a+1]<<endl;

}

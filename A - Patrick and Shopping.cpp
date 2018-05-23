#include <iostream>

using namespace std;

int main()
{

    long long int a,b,c,s[5],i,max;
    cin>>a>>b>>c;
    s[0]=(a+b)*2;
    s[1]=(b+c)*2;
    s[2]=(c+a)*2;
    s[3]=a+b+c;
    max=s[0];
    for(i=0;i<4;i++)
    {

        if(max>s[i])
        {

            max=s[i];

        }

    }
    cout<<max<<endl;
    return 0;

}

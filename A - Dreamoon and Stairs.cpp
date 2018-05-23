#include <iostream>

using namespace std;

int main()
{
    int x,y,i,n;
    cin>>x>>y;
    if(x%2==0)
    {
        i=x/2;
    }
    else
    {
        i=x/2+1;
    }
    while(i<=x)
    {
        if(i%y==0)
        {
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
    cout<<"-1"<<endl;
    return 0;

}

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m,n,i,l;
    int f[1004];
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>f[i];
    }
    sort(f,f+m);

    l=f[n-1]-f[0];
    for(i=0;i<m-n+1;i++)
    {
        if(f[i+n-1]-f[i]<l)
        {
            l=f[i+n-1]-f[i];
        }
    }

    cout<<l<<endl;

    return 0;
}

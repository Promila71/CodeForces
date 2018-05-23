#include <bits/stdc++.h>
#include <math.h>

using namespace std;


int main()
{

    long long int n,m,z,b;
    cin>>n>>m;
    if(n<m)
    {
        b=pow(2,n);
        z=m%b;
        cout<<z<<endl;
    }
    else
    {

        cout<<m<<endl;

    }

    return 0;



}

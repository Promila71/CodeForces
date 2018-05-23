#include <iostream>

using namespace std;

int main()
{

    int t,k,p,s,n;
    cin>>k>>s>>p>>n;
    t=((s-1+p)/p*k+n-1);
    t=t/n;
    cout<<t;
    return 0;


}

#include <iostream>

using namespace std;

int main()
{
    int i,n,k,y,incr=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>y;
        if(y<=5-k)
        {
            incr++;
        }
    }
    cout<<incr/3<<endl;

    return 0;
}

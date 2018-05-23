#include <iostream>

using namespace std;

int main()
{

    int a,b,c,d,m,m1,x,y;
    cin>>a>>b>>c>>d;
    x=3*a/10;
    y=a-a/250*c;
    m=x>y?x:y;
    x=3*b/10;
    y=b-b/250*d;
    m1=x>y?x:y;
    if(m>m1)
    {

        cout<<"Misha"<<endl;

    }
    else if(m<m1)
    {

        cout<<"Vasya"<<endl;

    }
    else
    {

        cout<<"Tie"<<endl;

    }


    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(abs(a-c)==abs(b-d))
  cout<<a<<" "<<d<<" "<<c<<" "<<b;
  else if(a==c)
  cout<<a+b-d<<" "<<b<<" "<<a+b-d<<" "<<d;
  else if(b==d)
  cout<<a<<" "<<a+b-c<<" "<<c<<" "<<a+d-c;
  else 
  cout<<-1;
  return 0;
}

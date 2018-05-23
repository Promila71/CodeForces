#include <bits/stdc++.h>
#include <math.h>



using namespace std;


int main()
{

    double n,m,a;
    double s=0;
    scanf("%lf %lf %lf",&n,&m,&a);
    s=ceil(n/a)*ceil(m/a);
    printf("%.0lf\n",s);
    return 0;

}

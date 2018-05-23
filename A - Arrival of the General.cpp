#include <stdio.h>

int main() {
        int i,n,inmin=0,inmax=0,final;
        int ara[104];
        scanf("%d",&n);
        for(i=0; i<n; i++) {
            scanf("%d",&ara[i]);
        }
        int max=ara[0];
        int min=ara[0];
        for(i = 1 ; i < n ; i++) {
            if (ara[i] > max) {
                max = ara[i];
                inmax=i;
            }
            if (ara[i] < min) {
                min = ara[i];
                inmin=i;
            } else if(ara[i] == min) {
                inmin = i ;
            }
        }
        final = inmax + (n - inmin - 1) ;
        if(inmax > inmin)final--;
        printf("%d\n",final);
        return 0;
}

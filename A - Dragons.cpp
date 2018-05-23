#include <stdio.h>
 int main()
 { 
 int s,n; 
 scanf("%d %d",&s,&n); 
 int x[n],y[n],i,j,p; 
 for(i=0;i<n;i++){
  scanf("%d %d",&x[i],&y[i]);
  }
  for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
          if(x[i]>x[j]){
              p=x[i];
              x[i]=x[j];
              x[j]=p;
               p=y[i];
              y[i]=y[j];
              y[j]=p;
          }
      }
  }
  for(i=0;i<n;i++){
   if(s<=x[i]){
    printf("NO"); 
    break; 
    }
     if(i==n-1)
      printf("YES"); 
      s=s+y[i];
       }
        return 0; 
        }

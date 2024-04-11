
#include<stdio.h>
int main(){




int n, ans, m , o;
     scanf("%d",&n);
     m = n/5-4;
     if( m % 2 != 0){
          m -= 1;
     }

     for( o = 0; o < 5; o++){

ans = m + 2 * o;
printf("%d ",ans);}

return 0 ;

}

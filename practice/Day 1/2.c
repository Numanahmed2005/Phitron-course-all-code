#include<stdio.h>

int main(){

   int a , b ;
   scanf("%d %d",&a,&b);
   int sum  = a + b ;
   int diff = a-b ;
   int mul = a * b ;

   double div = (double) a/ b ;
   printf("%d %d %d %lf",sum,diff,mul,div);


    return 0;
}

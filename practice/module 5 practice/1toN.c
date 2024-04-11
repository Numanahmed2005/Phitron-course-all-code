#include<stdio.h>
int main()
{

   long long int X ; long long int sum = 0;
    scanf("%lld", &X);
    int i ;
    for(i=1; i<=X; i++ )
    {
 sum = sum + i ;
    }
    printf("%lld",sum);
    return 0 ;
}


#include<stdio.h>
int main()
{
    int a,b ;
    scanf("%d %d", &a,&b);
    int gift = a/b ;
    int left = a%b ;
    printf("%d %d",gift,left);
    return 0 ;

}

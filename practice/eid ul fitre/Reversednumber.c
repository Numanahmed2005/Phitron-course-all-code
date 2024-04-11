#include <stdio.h>
int main()
{
    int N,reverse_number=0,reminder;
    scanf("%d",&N);
    while(N!=0)
    {

        reminder=N%10;
        reverse_number=reverse_number*10+reminder ;
        N = N/10 ;
    }
    printf("%d",reverse_number);
    return 0 ;
}

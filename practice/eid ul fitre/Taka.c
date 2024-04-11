#include<stdio.h>
int main()
{
    int X,Y ;
    scanf("%d %d",&X,&Y);
    int total = X - Y ;
    int Rina = total / 2 ;

    int Mina = total / 2+ Y ;
    printf("%d %d",Mina,Rina);



    return 0 ;
}

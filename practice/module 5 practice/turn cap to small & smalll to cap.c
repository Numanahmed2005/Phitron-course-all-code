#include<stdio.h>
int main()
{

char a ;
scanf("%c",&a);
if ( a >='a' && a<='z' )
{

int sum = a-32 ;
printf("%c", sum);

}
else
{
int sum = a + 32 ;
printf("%c",sum);

}





return 0 ;
}

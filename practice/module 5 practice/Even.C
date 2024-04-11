#include<stdio.h>
int main()
{

int n,sum,i, even;
printf("Enter a number: ");
scanf("%d",&n);

sum=(n-20)/5 ;
even = sum;

for(i=0; i< sum ; i++){
even += i*5;
}
printf("%d",even);
return 0 ;
}

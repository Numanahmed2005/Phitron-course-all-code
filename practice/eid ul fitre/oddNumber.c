#include<stdio.h>
int main() {

    int i, n, sum=0;
    scanf("%d", &n);
    sum = (n/4)-3 ;
    printf("%d ", sum);
    for(i=0; i<3; i++)
    {
        sum = sum + 2 ;
        printf("%d ", sum);
    }
    return 0;
}

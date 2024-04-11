#include<stdio.h>
int main(){
int a ;

scanf("%d",&a);
if ( a <=0){
    if( a == 0){
        printf(' you entered 0');

    }
    else{
        printf(" you entered negative number");
    }
}
else{
    printf("positive");
}
return 0 ;
}

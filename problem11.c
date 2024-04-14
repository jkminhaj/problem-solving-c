#include <stdio.h>
int main () {
    int number ;
    printf("please inter an integer : ");
    scanf("%d",&number);
    if(number>0){
        printf("%d is a positive integer",number);
    }
    if(number<0){
        printf("%d is a negative integer",number);
    }
    if(number==0){
        printf("%d is a neutral",number);
    }
    return 0 ;
}
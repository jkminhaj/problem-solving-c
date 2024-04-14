#include <stdio.h>
int main () {
    // even or odd
    int number ;
    printf("please inter an integer : ");
    scanf("%d",&number);
    if(number%2 == 0){
        printf("%d is an even integer",number);
    }else{
        printf("%d is an odd integer",number);
    }
    return 0 ;
}
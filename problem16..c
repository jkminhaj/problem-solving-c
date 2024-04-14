// Simple Calculator
#include <stdio.h>

int main() {
    int num1 , num2 ;
    printf("please input number 1 : ");
    scanf("%d",&num1);
    printf("please input number 2 : ");
    scanf("%d",&num2);
    printf("%d + %d = %d \n",num1 , num2 , num1+num2);
    printf("%d - %d = %d \n",num1 , num2 , num1-num2);
    printf("%d * %d = %d \n",num1 , num2 , num1*num2);
    printf("%d / %d = %.1f \n",num1 , num2 , (float)num1/num2);
    return 0;
}
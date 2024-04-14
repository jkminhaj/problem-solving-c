#include <stdio.h>
int main (){
    float faren ;
    printf("please enter fahrenheit : ");
    scanf("%f",&faren);
    printf("%.2f fahrenheit = %.2f celcius",faren , (faren-32)*5/9);
    return 0 ;
}
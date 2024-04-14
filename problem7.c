#include <stdio.h>
int main()
{
    float item1, item2, quan1, quan2;
    printf("please input item 1 weight ");
    scanf("%f", &item1);
    printf("please input item 1 quantity ");
    scanf("%f", &quan1);
    printf("please input item 2 weight ");
    scanf("%f", &item2);
    printf("please input item 2 quantity ");
    scanf("%f", &quan2);
    float avarage = ((item1 * quan1) + (item2 * quan2)) / (quan1 + quan2);
    printf("The avarage is %f", avarage);
    return 0;
}
// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

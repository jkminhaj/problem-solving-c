#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("Input the third integer: ");
    scanf("%d", &third);

    if(first>second && first>third){
        printf("%d is the biggest", first);
    }
    if(second>first && second>third){
        printf("%d is the biggest", second);
    }
    if(third>second && third>first){
        printf("%d is the biggest", third);
    }
    return 0;
}
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35

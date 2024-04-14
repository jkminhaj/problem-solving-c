// A persons's daily income is X taka. What is her income in one year?

// Example:

// if X = 15 then,

// In one year the income of the person is 5475 taka.

// Input Format

// The input file contains one integer number X

// Constraints

// 0<= X <=10^8
// Output Format

// Output will show the one integer numbers in a separate line.
// input = 15 ; output = 5475

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long int a;
    scanf("%ld", &a);
    printf("%ld", a * 365);
    return 0;
}
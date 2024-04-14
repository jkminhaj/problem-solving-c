// In a division problem, the dividend is D, the quotient is Q and the remainder is R. What is the divisor?

// Example:

// if D = 16, Q = 5 and R = 1 then,

// Divisor is 3

// image

// Input Format

// The input file contains only 3 integer numbers D, Q and R (D<=4000, Q<100 and R<20).

// Output Format

// Output will show the one integer numbers in a separate line.

// input : 16 5 1 : output : 3
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int D, Q, R;
    scanf("%d", &D);
    scanf("%d", &Q);
    scanf("%d", &R);
    printf("%d", (D - R) / Q);
    return 0;
}

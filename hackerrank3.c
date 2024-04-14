// Mina and Rina together have X taka. Mina has Y taka more than Rina. What amount of money does Mina and Rina each have.

// Example:

// if X = 7532, and Y = 560 then,

// Mina has 4046 taka and Rina has 3486 taka.

// Input Format

// The input file contains only 2 integer numbers X and Y (X<=10000 and Y<4000).

// Output Format

// Output will show the two integer numbers first one is Mina's and second one is Rina's taka which is seperate by space in a separate line.

// Problem Source: https://school.outsbook.com/problems/problemdetails/103

// Sample Input 0

// 7532 560
// Sample Output 0

// 4046 3486

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int X, Y, M, R;
    scanf("%d%d", &X, &Y);
    M = (X + Y) / 2;
    R = X - M;
    printf("%d %d", M, R);
    return 0;
}

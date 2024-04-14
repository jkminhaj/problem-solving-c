// The sum of ages of a father and his daughter is X years. Father's age is four times the age of the daughter. What are their ages ?

// Input Format

// The input file contains only 1 integer number X (X<=10000).

// Output Format

// Output will show the two integer numbers first one is father's and second one is daughter's age which is seperate by space in a separate line.

// Problem Source: https://school.outsbook.com/problems/problemdetails/104

// Sample Input 0

// 80
// Sample Output 0

// 64 16
// Explanation 0

// When X = 80 then,

// Father's age is 64 years and daughter's age is 16 years.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int x;
    scanf("%d", &x);
    printf("%d %d", 4 * (x / 5), x / 5);
    return 0;
}

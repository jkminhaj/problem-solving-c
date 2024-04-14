// You are given a positive integer n. Your task is to calculate the sum of all integers from 1 to n, inclusive.

// Input Format

// The input consists of a single integer n (1≤n≤10^9)

// Output Format

// Output a single integer representing the sum of all integers from 1 to n.

// Sample Input 0

// 5
// Sample Output 0

// 15
// Sample Input 1

// 10
// Sample Output 1

// 55
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i;
    scanf("%d", &n);
    long int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%ld", sum);
    return 0;
}
// Make a simple program that reads one variable named N which is the summation of 5 consecutive even numbers. Print the 5 consecutive even numbers whose summation is N.

// Input Format

// Input file contain one integer number N (0< N <=50000).

// Output Format

// Output will show the 5 consecutive even integer numbers seperated by space in a separate line.

// Problem Source: https://school.outsbook.com/problems/problemdetails/212

// Sample Input 0

// 130
// Sample Output 0

// 22 24 26 28 30
// Explanation 0

// 22 + 24 + 26 + 28 + 30 = 130

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int Thrd = (n / 5), First = Thrd - 4, Sec = First + 2, Frth = Thrd + 2, Fifth = Frth + 2;
    printf("%d %d %d %d %d", First, Sec, Thrd, Frth, Fifth);
    return 0;
}
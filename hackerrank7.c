// Make a simple program that reads one variable named N which is the summation of 4 consecutive odd numbers. Print the 4 consecutive odd numbers whose summation is N.

// Input Format

// Input file contain one integer number N (0< N <=40000).

// Output Format

// Output will show the 4 consecutive odd integer numbers seperated by space in a separate line.

// Problem Source: https://school.outsbook.com/problems/problemdetails/211

// Sample Input 0

// 96
// Sample Output 0

// 21 23 25 27
// Explanation 0

// 21 + 23 + 25 + 27 = 96
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int Thrd = (n / 4) + 1, First = Thrd - 4, Sec = First + 2, Frth = Thrd + 2;
    printf("%d %d %d %d", First, Sec, Thrd, Frth);
    return 0;
}
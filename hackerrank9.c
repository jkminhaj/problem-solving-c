// Make a simple program that reads one variables named N which is must a 4 digit number. Your task is to print the number in reverse order.

// Example:

// If N = 1234 then,

// You need to print 4321

// Input Format

// The input file contains one 4 digit integer number N (1000<=N<=9999).

// Output Format

// Output will show the reverse of the given number in a separate line.

// Problem Source: https://school.outsbook.com/problems/problemdetails/300

// Sample Input 0

// 1234
// Sample Output 0

// 4321
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    char numString[10];
    sprintf(numString, "%d", num);
    int position = 0;
    char reverseString[10];
    for (int i = strlen(numString) - 1; i >= 0; i--)
    {
        // printf("%d\n",position);
        reverseString[i] = numString[position];
        position += 1;
    }
    printf("%s", reverseString);
    return 0;
}
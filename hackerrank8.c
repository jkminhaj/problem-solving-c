// It's Eid time, and everyone is celebrating! However, Asif wants to distribute gifts to all the children in the neighborhood. He wants to ensure that each child gets an equal number of gifts, and no gift is left unused.

// You are given the total number of gifts Asif has and the number of children in the neighborhood. Your task is to help Asif determine how many gifts each child will receive and whether there will be any gifts left over.

// Input Format

// The input consists of two integers separated by a space:

// n (1≤n≤10^9) the total number of gifts, and
// m (1≤m≤1000) the number of children.
// Output Format

// Output two integers separated by a space: the number of gifts each child will receive and the number of remaining gifts.

// Sample Input 0

// 20 5
// Sample Output 0

// 4 0
// Explanation 0

// Explanation: Ali has 20 gifts to distribute among 5 children. Each child will receive 20/5=4 gifts, and there will be no gifts left over. Therefore, the output is "4 0".
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d %d", n / m, n % m);
    return 0;
}
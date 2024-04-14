// Asif's house is located at point 0 and his friend's house is located at point x of the coordinate line. Asif can move 1, 2, or 3 positions forward in one step. Determine, what is the minimum number of steps he needs to get his friend's house.

// Input Format

// The input contains an integer x(10^7 >= x > 0) — The coordinate of the friend's house.

// Output Format

// Print the minimum number of steps Asif needs to make to get from point 0 to point x.

// Sample Input 0

// 10
// Sample Output 0

// 4
// Explanation 0

// Explanations: Asif can get to point x if he moves by 3, 3, 3, and 1. There can be other ways to get the optimal answer but Asif cannot reach x in less than 4 moves.
#include <stdio.h>

int main()
{
    int coor, minsteps;
    scanf("%d", &coor);
    if (coor < 3)
    {
        if (coor == 2)
            minsteps = 1;
        if (coor == 1)
            minsteps = 1;
    }
    else
    {
        if (coor % 3)
        {
            minsteps = coor / 3;
            if (coor % 3 == 1 || coor % 3 == 2)
                minsteps += 1;
        }
        else
            minsteps = coor / 3;
    }

    printf("%d\n", minsteps);
    return 0;
}
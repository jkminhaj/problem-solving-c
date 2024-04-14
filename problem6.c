#include <stdio.h>
#include <math.h>
int main() {
    int x1 , x2 , y1 , y2 ;
    double distance ;
    printf("please input x1 : ");
    scanf("%d",&x1);
    printf("please input x2 : ");
    scanf("%d",&x2);
    printf("please input y1 : ");
    scanf("%d",&y1);
    printf("please input y2 : ");
    scanf("%d",&y2);
    // d=√((x2 – x1)² + (y2 – y1)²).
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between the said points: %.4f",distance);
    
    return 0;
}
// Write a C program to calculate the distance between two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

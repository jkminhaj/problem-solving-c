#include <stdio.h>
int main()
{
    int id;
    float hours, money;
    printf("Please input Emplyees ID : ");
    scanf("%d", &id);

    printf("Please input working hours : ");
    scanf("%f", &hours);

    printf("Please input salary amount per hours : ");
    scanf("%f", &money);

    printf("Employees ID = %d \nSalary = US$ %.2f", id, money * hours);

    return 0;
}
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

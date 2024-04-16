/*Program to print numbers in square pattern*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    for (int i = 1; i <= number * number; i++)
    {
        if (i % number == 0)
            printf("%d\n", i);
        else
            printf("%d*", i);
    }
}
/*Output we got is
Enter the number :5
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
*/
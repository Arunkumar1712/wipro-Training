#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    for (int i = 1; i <= number; i *= 2)
    {
        if(i==number)
        printf("%d\n", i);
        else
        printf("%d, ", i);
    }
}

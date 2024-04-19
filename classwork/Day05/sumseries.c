#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int ans = 3;
    int num = 11;
    printf("%d ,", ans);
    for (int i = 1; i < number; i++)

    {
        ans = 3 * num;
        num = num * 10 + 1;
        if (i == number - 1)
            printf("%d \n", ans);
        else
            printf("%d ,", ans);
    }
}

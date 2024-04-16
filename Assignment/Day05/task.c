#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int ans = 0;
    for (int i = 0; i < number; i++)
    {
        ans = i * i + i * 2;
        printf("%d ,", ans);
    }
}



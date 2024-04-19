#include <stdio.h>

void print_multiplication_table(int number)
{
    printf("Table: %d\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    print_multiplication_table(number);
    return 0;
}

/*program for table*/
#include <stdio.h>

void table(int number)
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
    table(number);
    return 0;
}

/*Output we got is 
Enter a number : 2
Table: 2
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
*/
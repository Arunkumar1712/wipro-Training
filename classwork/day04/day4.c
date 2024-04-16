#include <stdio.h>

int main()
{

    char operator;
    int n1, n2, ans;

    printf("Enter the operation need to perform (+,-,*,/)");
    scanf("%c/n", &operator);

    printf("Enter the two numbers");
    scanf("%d %d", &n1, &n2);

    switch (operator)
    {

    case '+':
    {
        ans = n1 + n2;
        printf("Additionn of two numbers is %d", ans);
        break;
    }
    case '-':
    {
        ans = n1 - n2;
        printf("subraction of two numbers is %d", ans);
        break;
    }
    case '*':
    {
        ans = n1 * n2;
        printf("multiplication of two numbers is %d", ans);
        break;
    }
    case '/':
    {
        if (n2 !=0)
        {
            ans = n1 / n2;
            printf("division of two numbers is %d", ans);
        }
        else{
            printf("we cant perform divsion because number 2 is zeros");
        }

        break;
    }
    }

    return 0;
}
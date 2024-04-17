/*Program to print alphabet triangle*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i, j, k;
    int row;
    char ch = 65;

    for (row = 0; row < n; row++)
    {
        for (i = n - 1; i > row; i--)
        {
            printf(" ");
        }
        for (j = 0, ch = 65; j <= row; j++, ch++)
        {
            printf("%c", ch);
        }
        ch--;
        for (k = row, --ch; k > 0; k--, ch--)
        {
            printf("%c", ch);
        }

        printf("\n");
    }
    return 0;
}
/*Output we got is
Enter the number: 6
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA
*/
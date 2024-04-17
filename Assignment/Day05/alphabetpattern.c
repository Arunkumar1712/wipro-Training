//Program to print alphabet triangle

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n<2||n>26)
    {
        printf("Invalid input. n should be between 2 and 26.\n");
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
            if(j<i)
            {
                printf("");
            }
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
            if(j>1)
            {
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}
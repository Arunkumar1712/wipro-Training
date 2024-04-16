/*Right Triangle start pattern*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    for (int i = 1; i < number; i++)
    {
        for(int j=0;j<i;j++){
        printf("*");
        }
        printf("\n");
    }
    for (int i = number; i >0; i--)
    {
        for(int j=0;j<i;j++){
        printf("*");
        }
        printf("\n");
    }
    
}
/*Output that we got*/
/*
Enter the number :5
*
**
***
****
*****
****
***
**
*

*/
/*Program to print rectange pattern using * */
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    for (int i = 1; i <= number*number; i++)
    {
        if(i%number == 0)
        printf("*\n");
        else
        printf("*");
        
        
    }
}

/*Output we got
Enter the number :5
*****
*****
*****
*****
*****

*/

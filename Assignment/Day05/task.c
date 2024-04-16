// First program to get series 0 ,3 ,8 ,15 ,24 ,35 ,48 ,63 ,80 ,99 
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
        if(i==number-1)
        printf("%d ", ans);
        else
        printf("%d ,", ans);
    }
}

/*Output we got 
Enter the number :10
0 ,3 ,8 ,15 ,24 ,35 ,48 ,63 ,80 ,99 
*/

/* Program to get sum of ood number and sum of even number based on user input*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int odd=0 ,even=0;
    for (int i = 1; i <= number; i++)
    {
        if(i%2==0){
            even+=i;
        }
       else{
        odd+=i;
       }
       
    }
    printf("Sum of Even = %d\n",even);
    printf("Sum of Odd = %d\n",odd);
    
}

/* Output we got :
Enter the number :50
Sum of Even = 650
Sum of Odd = 625
*/
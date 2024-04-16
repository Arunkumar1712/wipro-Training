#include <stdio.h>

int main()
{
    int age;
    printf("Please Enter your age :");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("category : Minor \nNot eligible to vote\n");
    }

    else
    {
        if (age > 18 && age < 65)
        {
            printf("category : Adult ");
        }
        else{
            printf("category : Senior Citizen");
        }
        printf("Eligible to vote");
    }
    return 0;
}

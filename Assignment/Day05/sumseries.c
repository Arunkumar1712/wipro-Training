// program to print serires 3,33,333,3333,33333 and its sum
#include <stdio.h>

int main() {
    int number,val;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("Enter the number for the series you want: ");
    scanf("%d", &val); 
    
    int num = 11;
    int total=0;
    int mul = val;
    printf("%d ,", val);
    

    for (int i = 1; i < number; i++) {
        total+=val;
        val = mul * num;
        num = num * 10 + 1;
        if (i == number-1)
            printf("%d\n", val);
        else
            printf("%d ,", val);
            
    }
    total+=val;
    printf("Sum of the series is %d",total);


    return 0;
}
/*Output we got 
Enter the number: 5
3 ,33 ,333 ,3333 ,33333
Sum of the series is 37035

Enter the number: 5
Enter the number for the series you want: 6
6 ,66 ,666 ,6666 ,66666
Sum of the series is 74070
*/

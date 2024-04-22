
/*Check whether a given number can be expressed as the sum of two prime number*/
#include <stdio.h>

int containsOnlyDigits(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 1 && digit != 4 && digit != 6 && digit != 9)
            return 0;
        num /= 10;
    }
    return 1;
}
int findNthNumber(int n) {
    int count = 0;
    int num = 1;
    while (count < n) {
        if (containsOnlyDigits(num))
            count++;
        num++;
    }
    return num - 1;
}

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    
    while (T--) {
        int N;
        printf("Enter N: ");
        scanf("%d", &N);
        
        int nthNumber = findNthNumber(N);
        printf("Output: %d\n", nthNumber);
    }
    
    return 0;
}
/*Output we got is
Enter the number of test cases: 5
Enter N: 21
Output: 111
Enter N: 58
Output: 644
Enter N: 4
Output: 9
Enter N: 8
Output: 19
Enter N: 6
Output: 14
*/
/*program to add subarray*/

#include<stdio.h>

int main() {
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int find = 7; 

    int i = 0, k = 0; 
    int sum = arr[0];
    int found = 0; 

    for (k = 1; k < size; k++) {
        while (i <= k && sum > find) {
            sum -= arr[i]; 
            i++;
        }

        if (sum == find) {
            printf("Subarray found in the indexes %d and %d\n", i + 1, k);
            found=1;
            break;
        }

        if (k < size) {
            sum += arr[k]; 
        }
    }

    if (!found) {
        printf("No subarray found in the array\n");
    }

    return 0;
}
/*Output we got is
Subarray found in the indexes 2 and 5
*/
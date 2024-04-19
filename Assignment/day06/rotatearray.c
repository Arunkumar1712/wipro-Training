/*ROtate array every kth element*/
#include<stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i += k) {
        int start = i;
        int end = (i + k - 1 < size - 1) ? i + k - 1 : size - 1;
        reverseArray(arr, start, end);
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        
    }
     printf("\n\n");
    return 0;
}


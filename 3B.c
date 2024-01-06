#include <stdio.h>
#include <stdlib.h>

int linear(int arr[], int size, int key);

int main() {
    int brr[50], key, size, result;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter array elements:");
    for (int i = 0; i < size; i++)
        scanf("%d", &brr[i]);

    printf("Enter the key:");
    scanf("%d", &key);

    result = linear(brr, size, key);

    if (result != -1) {
        printf("Key found at index: %d\n", result);
    } else {
        printf("Key not found\n");
    }

    return 0;
}

int linear(int x[], int size, int k) {
    for (int i = 0; i < size; i++) {
        if (x[i] == k) {
            return i;
        }
    }
    return -1; 
}

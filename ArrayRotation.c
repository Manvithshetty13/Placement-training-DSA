#include <stdio.h>

int main() {
    int arr[30], n, d, i, j;
    int temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to be rotated: ");
    scanf("%d", &d);

    for(i=0;i<d;i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp; 
        for (i = 0; i < n; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }

    printf("The Rotated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

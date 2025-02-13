#include<stdio.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort (int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            swap(&arr[i], &arr[count]);
            count++;
        }
    }
    
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int array[30], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the binary array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("The sorted array is:\n");
    sort(array, n);
    
    return 0;
}
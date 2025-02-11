#include<stdio.h>

int SumArray(int a[20] , int size)
{
    int Sum =0;
    for (int i=0;i<size;i++)
    {
        Sum+=a[i];
    }
    return Sum;
}

int main ()
{
    int arr[30];
    int n,i;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the array :");
    for( i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the sum of the array is : %d" , SumArray(arr , n)); 
}
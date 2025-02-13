#include<stdio.h>

int main()
{
    int arr[30] , size;
    printf("Enter th array size : ");
    scanf("%d",&size);
    printf("Enter th array :");
    for(int i =0; i< size;i++ )
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0; i< size;i++ )
    {
        printf("%d\t",*(arr+i));
    }

}
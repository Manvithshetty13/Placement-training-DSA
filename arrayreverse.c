#include<stdio.h>
int main()
{
    int a[30];
    int n;
    printf("Enter the array size :");
    scanf("%d \n",&n);
    printf("Enter the array : \n");
    for(int i = 0;i < n,i++)
    {
        scanf("%d",&a[i]);
    } 
    int b[30];
    int count =0;
    for(i= n-1;i<=0;i--)
    (
        b[count] = a[i];
    ) 
     printf("the reversed array is :");
    for(int i = 0;i < n,i++)
    {
    scanf("%d \t",a[i]);
    }
}

#include<stdio.h>
 void reverse( int a[30],int max){
     int b[30];
    int count =0;
    for(i= (max-1);i>=0;i--)
    {
        b[count] = a[i];
        count++;
    } 
    return{
    for(i = 0;i < max;i++)
    {
    printf("%d \t",b[i]);
    } 
    }
 }

 int main()
{
    int arr[30];
    int n,i;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the array :");
    for( i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("the reversed array is :");
    reverse(arr , n);
}
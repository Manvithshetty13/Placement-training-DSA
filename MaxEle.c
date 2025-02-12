#include<stdio.h>

int main()
{
    int i,size,max = 0,a[30];
    printf("Enter th array size : ");
    scanf("%d",&size);
    printf("Enter th array :");
    for(i =0; i< size;i++ )
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i =0; i< size;i++ )
    {
         if(a[i >= max])
         {
            max = a[i];
         } 
    }
    printf("the Max element is : %d" , max);
}
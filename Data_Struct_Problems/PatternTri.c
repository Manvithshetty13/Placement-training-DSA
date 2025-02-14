#include<stdio.h>

int main ()
{   
    int n;
    printf("Enter the size of the sides : ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)-i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
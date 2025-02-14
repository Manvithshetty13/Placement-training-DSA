#include<stdio.h>

int main ()
{
    int i,j;
    for(i=4;i>=0;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(j>i)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}
#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {   
        if(i%2==1)
        {
            for(j=1;j<=5;j++)
            {
                if (j%2 == 0)
                {
                    printf("0\t");
                }
                else
                {
                    printf("1\t");
                }
            }
            printf("\n");
        }
        else
        {
            for(k=1;k<=5;k++)
            {
                if (k%2 == 1)
                {
                    printf("0\t");
                }
                else
                {
                    printf("1\t");
                }
            }
            printf("\n");
        }
        
    }
}
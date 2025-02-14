#include<stdio.h>

int main ()
{ 
    int i,j;
    int ch = 'A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {   
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
}
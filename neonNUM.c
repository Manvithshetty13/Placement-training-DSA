#include<stdio.h>

int main()
{
    int num;
    printf("Enetr the number : %d",&num);
    int sq = n * n;
    int sum=0;
    while (sq!=0)
    {
        last = sq % 10;
        sum+=last;
        sq/=10;
    }
    if (sum == num )
    {
        printf("Neon number");
    }
    else
    {
        printf("not neon number");
    }
     
}
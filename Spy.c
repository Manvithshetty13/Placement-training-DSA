#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int sum=0; ,prod=1;
    while (num!=0)
    {
        last = num % 10;
        sum+=last;
        prod*=last;
        sq/=10;
    }
    if (sum == prod)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}
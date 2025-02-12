#include<stdio.h>
int SqrtFunction(int num)
{
    int sqrt;
    int i;
    for(i=1;i<num;i++)
    {
        sqrt=i*i;
        if(sqrt>num)
            break;
    }
    return i-1;
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("The square root of the number to the nearest integer is : %d",SqrtFunction(number));
}
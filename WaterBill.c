#include<stdio.h>

int main()
{
    int liters;
    int Bill_Amount = 0;
    printf("Enter the Water usage(in Liters) : ");
    scanf("%d",&liters);
    if(liters <=50)
    {
        Bill_Amount = (literes * 2);
    }
    else if (liters>50 && liters<=150)
    {
        Bill_Amount= (50*2)+((liters-50)*5);
    }
    else if (liters>150)
    {
        Bill_Amount= (50*2)+(150*5)+((liters-200)*8);
    }
    else
    {
        printf("Invalid entry !!");
    }

    if(Bill_Amount>800)
    {
        Bill_Amount = (Bill_Amount + (Bill_Amount*0.1));
    }

    printf("The bill amount is :  %d",Bill_Amount);
}
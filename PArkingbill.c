#include<stdio.h>

int main()
{
    int Time;
    int Bill_Amount = 0;
    printf("Enter the duration of parking : ");
    scanf("%d",&Time);
    if(Time <=2)
    {
        Bill_Amount = (Time * 20);
    }
    else if (Time>2 && Time<=5)
    {
        Bill_Amount= (2*20)+((Time-2)*30);
    }
    else if (Time>5)
    {
        Bill_Amount= (2*20)+(3*30)+((Time-5)*50);
    }
    else
    {
        printf("Invalid entry !!");
    }

    if(Bill_Amount>300)
    {
        Bill_Amount = (Bill_Amount - (Bill_Amount*0.1));
    }

    printf("The bill amount is :  %d",Bill_Amount);
}
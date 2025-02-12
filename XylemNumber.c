#include<stdio.h>

char Xylen(int num)
{   
    int rev = 0;
    int last = num % 10;
    while(num>9)
    {
        int Last = num % 10;
        rev = rev + Last;
        num/=10;
    }
    int first = num;

    if ((last + first) == rev)
    {
        return printf("Xylen_number");
    }

    else
    {
        return printf("Not_Xylen_number");
    }
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("%s",Xylen(number));
}

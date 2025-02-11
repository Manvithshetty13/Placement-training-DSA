#include<stdio.h>
int main()
{
    int num ,rev=0;
    int last = 0;
    int count = 0;
    printf("Enter the number :");
    scanf("%d" ,&num);
    int number = num;
    while(num!=0)
    {
        int last = num % 10;
        rev = (rev * 10) + last;
        count++;
        num/=10;
    }
    if (number == rev)
    {
        printf("The given number is a palindrome\n");
    }
    else{
        printf("the given number is not a palindrome\n");
    }
    printf("The Reversed number is : %d \n",rev);
    printf("count : %d",count);
    return 0;
}
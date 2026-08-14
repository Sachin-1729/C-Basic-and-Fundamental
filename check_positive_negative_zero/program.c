#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number to check\n");
    scanf("%d" , &number);
    if(number == 0)
    {
        printf("Number is 0\n");

    }
    else if(number > 0)
    {
        printf("Number is positive\n");
    }
    else{
        printf("Number is negative\n");
    }
}
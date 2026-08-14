#include<stdio.h>

int number;

int main()
{   

    printf("Enter the number you want to check\n");
    scanf("%d" , &number);
    if(number % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
}
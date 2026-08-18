#include<stdio.h>

int main()
{
    int num1 , num2 , num3;
    printf("Enter number\n");
    scanf("%d" , &num1); 
       printf("Enter number\n");
    scanf("%d" , &num2); 
       printf("Enter number\n");
    scanf("%d" , &num3); 

    if(num1 >= num2 && num1 >= num3)
    {
        printf("number %d is greater\n" , num1);
    }
   else if(num2 >= num1 && num2 >= num3)
    {
        printf("number %d is greater\n" , num2);
    }
   else if(num3 >= num2 && num3 >= num1)
    {
        printf("number %d is greater\n" , num3);
    }

}
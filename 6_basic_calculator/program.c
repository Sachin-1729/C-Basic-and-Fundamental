#include<stdio.h>

int main()
{
    printf("Welcome to basic calculator\n");
    float a , b;
    char operation;

    printf("Which operation you want to perfomr\n");
    scanf("%c" , &operation);
    printf("enter your first number\n");
    scanf("%f" ,&a);
    printf("enter your Second number\n");
    scanf("%f" , &b);
    float ans;
    switch(operation)
    {
        case('+'):
        ans = a + b;
        break;
        case('-'):
        ans = a - b;
        break;
        case('*'):
        ans = a * b;
        break;
        case('/'):
        if(b == 0)
        {
            printf("This is illegal operation\n");
            return 0;
        }
        ans = b!=0 ? a / b : 0;
        default:
        printf("Enter valid operation\n");
        
    }

    printf("result: %f\n" , ans);
    

}
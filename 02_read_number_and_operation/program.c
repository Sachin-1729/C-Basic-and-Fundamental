#include<stdio.h>


int sum(int a , int b)
{
    return a+ b;
}

int product(int a , int b)
{
    return a * b;
}

int main(){
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d" "%d" , &number1 , &number2);
    int add = sum(number1 , number2);
    printf("Sum of two number is %d\n" , add);
    int prod = product(number1 , number2);
    printf("Product of two number is %d" , prod);
    




}
#include<stdio.h>



void swap(int *a , int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    printf("Enter the first number\n");
    int a;
    scanf("%d" , &a);
    printf("Enter the second number\n");
    int b;
    scanf("%d" , &b);
    swap(&a , &b);
    printf("Value after swap is %d , %d\n" , a , b);


}
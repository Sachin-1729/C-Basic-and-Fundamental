#include<stdio.h>

int main()
{
    printf("Enter the nth term till you want sum\n");
    int n;
    scanf("%d" , &n);
    int result = n * (n+1)/2;
    printf("result %d \n" , result);

}
#include<stdio.h>

int main()
{
    printf("Enter the number you want to count its digt\n");
    int n;
    scanf("%d", &n);
    int count = 0;
    int original = n;
    while(n!=0)
    {
        int digit = n % 10;
        count++;
        n = n /10;
    }
    printf("The  number of digit in %d is %d\n" ,original, count);
}
#include<stdio.h>

int main()
{
    printf("Eneter the number you want it to be reversed\n");
    int n;
    scanf("%d" , &n);
    while (n != 0)
    {
        int last_digit = n % 10;
        if(last_digit != 0)
        {
               printf("%d" , last_digit);
        }
      
        n = n / 10;
    }
    
}
#include<stdio.h>

int main()
{
    printf("Eneter the number you want it to be reversed\n");
    int n;
    scanf("%d" , &n);
    int ans = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
         ans = ans * 10 + last_digit;
      
        n = n / 10;
    }
    printf("reverse : %d\n" , ans);
}
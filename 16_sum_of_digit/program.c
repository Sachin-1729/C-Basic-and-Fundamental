#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to get it digit sum\n");
    scanf("%d", &n);
    int ans = 0;
    while(n != 0)
    {
        ans += n % 10;
        n = n/10;
    }
    printf("The digit sum is %d\n", ans);

}
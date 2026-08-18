#include<stdio.h>

int main()
{
    printf("Enter the number you want its factorial\n");
    int n;
    scanf("%d" , &n);
    long long int ans = 1;

    for(int i = n; i >=1; i--)
    {
           ans = ans * i;
    }

    printf("result: %lld \n" , ans);
}
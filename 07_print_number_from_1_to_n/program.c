#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number till you want to print\n");
    scanf("%d" , &n);
    for(int i = 1; i <=n; i++)
    {
        printf("%d " , i);
    }
    printf("\n");
}
#include<stdio.h>

int main()
{
    printf("Enter the number till you want to print even\n");
    int n;
    scanf("%d" , &n);
    for(int i = 1; i <=n; i++)
    {
        if(i%2==0)
        {
            printf("%d " , i);
        }
    }
    printf("\n");
}
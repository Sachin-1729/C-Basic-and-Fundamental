#include<stdio.h>

int squareRoot(int n)
{
    for(int i = 1; i <=n; i++)
    {
        if(i*i > n)
        {
             return i-1;
        }
        else if(i*i == n)
        {
            return i;
        }
    }

    return 0;
}

int main()
{
    printf("Enter the number to check if it is prime or not\n");

    int n;
    scanf("%d" , &n);
    if(n <= 1)
    {
        printf("Not prime");
        return 0;
    }
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
             printf("Not prime");
            return 0;
        }
    }

    printf("The number %d is prime \n" , n);
    
}
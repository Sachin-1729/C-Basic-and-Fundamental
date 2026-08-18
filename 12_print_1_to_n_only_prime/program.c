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

int checkPrime(int n)
{
   
    if(n <= 1)
    {
        // printf("Not prime");
        return 0;
    }
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            //  printf("Not prime");
            return 0;
        }
    }

   return n;
    
}

int main()
{
    printf("Enter the number till you want to print prime number\n");
    int n;
    int count = 0;
    scanf("%d" , &n);
    for(int i = 2; i <=n; i++)
    {
          if(checkPrime(i))
          {
            printf("%d " , i);
            count++;
          }
    }
    printf("\n");
    printf("%d",count);
}
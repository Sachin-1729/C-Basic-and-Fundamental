#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number till you want to print the fibonacci series\n");
    scanf("%d" , &n);

    int current = 0;
    int prev_first = 1;
    int prev_second = 0;

    for(int i = 0; i <n; i++)
    {
       printf("%d ",  current);
       prev_second = prev_first;
       prev_first = current;
       current = prev_first + prev_second;

    }
    printf("\n");


}
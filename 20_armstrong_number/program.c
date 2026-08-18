#include<stdio.h>

int main()
{
    printf("Enter the number you want to check if it is armstrong or not\n");
    int n;
    scanf("%d" , &n);
    int digit = 0;
    int original = n;
    int original_2 = n;
    int result = 0;

    while(n != 0)
    {   
        int digt = n % 10;
        digit++;
        n = n / 10;
    }

    while(original!=0)
    {
        int digt = original % 10;
        int prod = 1;
        for(int i = 1; i <= digit; i++)
        {
            prod = prod*digt;
        }
        result = result + prod;
        original = original / 10;

    }

    if(result == original_2)
    {
        printf("Yes it is armstrong\n");
        return 0;
    }

    printf("No, it is not armstrong\n");
}
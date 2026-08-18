#include<stdio.h>

int main()
{
    printf("Enter the two non negative and zero number you want to find the GCD\n");
    int a;
    int b;
    scanf("%d" , &a);
    scanf("%d", &b);
    int divisor = 0;
    int divident = 0;
    if(a < b)
    {
        divisor = a;
        divident = b;
    }
    else{
        divisor = b;
        divident = a;
    }

   while(divident % divisor != 0)
        {
            int quotient = divident / divisor;
            int remainder = divident % divisor;
            divident = divisor;
            divisor=remainder;
        }

    if(divident % divisor == 0)
    {
        printf("GCD is %d\n" , divisor);
    }
    


}
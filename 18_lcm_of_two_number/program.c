#include<stdio.h>

int main()
{   
    int a , b;
    printf("Enter the two number you want to find the lcm\n");
    scanf("%d  %d", &a , &b);
    printf("%d  %d\n" , a , b);
    for(int i = 1;  ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("The LCM is: %d\n" , i);
            return 0;
        }
    }
    return 0;
}
#include<stdio.h>

int max(int a , int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
    return 0;
}

int main()
{ 
    int a , b;
    printf("Enter two number to check larger\n");
    scanf("%d" "%d",  &a,  &b);
    printf("The number which is larger is: %d\n" , max(a , b));

}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[2000];
    printf("Enter your string\n");
    fgets(a , 2000 , stdin);
    printf("Your entered string is %s ", a);
}
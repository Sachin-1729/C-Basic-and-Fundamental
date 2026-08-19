#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array you want\n");
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));
        printf("Enter the element\n");

    for(int i = 0; i < n; i++)
    {
        int number;
    
        scanf("%d" , &number);
        p[i] = number;
    }

    int start = 0;
    int end = n-1;
    while(start < end)
    {
        int a = p[start];
        int b = p[end];
        p[end] = a;
        p[start] =b;
        start++;
        end--;
    }

    printf("reverse of the given array is\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\n");
    free(p);
}
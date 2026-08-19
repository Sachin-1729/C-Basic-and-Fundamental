#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


int min(int a[] , int n)
{
    int maxi = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < maxi)
        {
            maxi = a[i];
        }
    }
    return maxi;
}

int main()
{
    int n;
    printf("Enter the size of array you want to find its minimumn element\n");
    scanf("%d" , &n);
    int *ptr = malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocaton failed\n");
        return 1;
    }


    for(int i = 0; i < n; i++)
    {
       int number;
       char c;
     printf("Enter the %d element of the array\n", i+1);
       scanf("%d", &number);
       ptr[i] = number;

   

    }

    printf("The minimum element of given array is %d \n" , min(ptr , n));
}
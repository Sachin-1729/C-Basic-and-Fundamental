#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


int getSecondMax(int a[] , int n)
{
    int maxi = INT_MIN;
    int secondMax;
    for(int i = 0; i < n; i++)
    {
         if(a[i] > maxi)
         {    
               secondMax = maxi;
               maxi = a[i];
         } 
         else if(a[i] < maxi && a[i] > secondMax)
         {
            secondMax = a[i];
         }
    }

    return secondMax;
}

int main()
{
    printf("Enter the size of the array\n");

    int n;
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));

    if(p == NULL)
    {
        printf("Memory Allocation failed!|n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("Enter the element in the array\n");
        int number;
        scanf("%d", &number);
        p[i] = number;
   
    }

    int ans = getSecondMax(p , n);
    printf("Second maximum element of the array is %d \n" , ans);
    free(p);
    return 0;
}
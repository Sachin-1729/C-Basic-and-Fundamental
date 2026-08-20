#include<stdio.h>
#include<stdlib.h>

int getFrequency(int a[] , int n, int search)
{   
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            count++;
        }
    }
    return count;
}


int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d" , &n);

    int *p = malloc(n*sizeof(int));
    if(p == NULL)
    {
        printf("Memory Allocation is failed\n");
    }

    for(int i = 0; i < n; i++)
    {
        int n;
        printf("ENter the element to build the array\n");
        scanf("%d" , &n);
        p[i] = n;
    }

    int searchkey;
    printf("Enter the search key for its frequency value\n");
    scanf("%d" , &searchkey);


    printf("The frequency of the element %d in the given array is %d\n" , searchkey , getFrequency(p , n , searchkey));
}
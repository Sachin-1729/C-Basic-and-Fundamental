#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element\n");
        int n;
        scanf("%d" , &n);
        p[i]=n;
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {   
        for(int j = i+1; j < n; j++)
        {
            if(p[i] == p[j])
            {
             
              count++;
            }
        }
    }

 
    printf("Number of duplicate lement is %d\n", count);
    free(p);




}
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void selectionSort(int *p , int n)
{  
    for(int i = 0; i < n; i++)
    { 
        int mini = INT_MAX;
        int j;
        int miniIndex;
        for(j = i; j < n; j++)
        {
            if(p[j] < mini)
            {
                mini = p[j];
                miniIndex = j;
            }
        }

        int temp = p[i];
        p[i] = p[miniIndex];
        p[miniIndex] = temp;


    }
}

int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d" , &n);

    int *p = malloc(n*sizeof(int));
    printf("Please Enter the elements\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &p[i]);
    }
    selectionSort(p , n);
    printf("Sorted array is:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d " , p[i]);
    }
    printf("\n");
    free(p);


}
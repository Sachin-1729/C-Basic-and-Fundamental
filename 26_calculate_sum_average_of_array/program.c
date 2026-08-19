#include<stdio.h>
#include<stdlib.h>

int * getSumAndAverage(int *a , int n)
{
    int sum = 0;
    int average = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
int *arr = malloc(2*sizeof(int));
arr[0] = sum;
arr[1]= sum/n;

    return arr;
}

int main()
{
    int n;
    printf("Enter the size of array you want\n");
    scanf("%d", &n);
    int *p = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array\n", i+1);
        int number;
        scanf("%d" , &number);
        p[i] = number;
    }

    int *ans = getSumAndAverage(p , n);
    printf("The sum of the array is : %d and the average is %d \n" , ans[0] , ans[1]);


    free(p);
    free(ans);
    return 0;
    
}
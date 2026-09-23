#include<stdio.h>
#include<stdlib.h>


int partition(int *p, int low, int high)
{
    int i = low;
    int j = high;

    int pivot = p[low];

    while (i < j)
    {
        // Find an element greater than pivot from left
        while (i <= high && p[i] <= pivot)
        {
            i++;
        }

        // Find an element smaller than or equal to pivot from right
        while (j >= low && p[j] > pivot)
        {
            j--;
        }

        // Swap misplaced elements
        if (i < j)
        {
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }

    // Put pivot in its correct position
    int temp = p[low];
    p[low] = p[j];
    p[j] = temp;

    return j;
}


void quickSort(int *p , int low , int high)
{
     if(low >= high)
     {
        return;
     }

     int pi = partition(p , low , high);
     quickSort(p , low , pi-1);
     quickSort(p, pi+1, high);
}


int main()
{
    int n;
    printf("Enter the number of the element\n");
    scanf("%d" , &n);

    int *p = malloc(n*sizeof(int));
    printf("Enter the element\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &p[i]);
    }
    int k;
    printf("Enter the kth value you want to find the kth smallest element\n");
    if(k<=0 && k > n-1)
    {  
        printf("Enter the approprita in range value\n");
        return 0;
    }
    scanf("%d" , &k);
    quickSort(p, 0, n-1);
    printf("%dth smallest element is %d\n", k, p[k-1]);
}
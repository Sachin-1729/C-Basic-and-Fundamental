#include<stdio.h>
#include<stdlib.h>

int partition(int *arr, int low, int high)
{
    int start = low;
    int pivot = arr[low];

    while (low < high)
    {
        while (arr[low] <= pivot && low < high)
        {
            low++;
        }

        while (arr[high] > pivot)
        {
            high--;
        }

        if (low < high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }

    // Put pivot into its correct position
    int temp = arr[start];
    arr[start] = arr[high];
    arr[high] = temp;

    return high;
}

   
void quick_sort(int *arr , int low , int high)
{
    if(low >= high)
    {
        return;
    }


    int partition_index = partition(arr , low , high);
    quick_sort(arr , low , partition_index - 1);
    quick_sort(arr , partition_index + 1 , high);
  
}


int main()
{
    int n;
    printf("Enter the number of elements you want to sort\n");
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &p[i]);
    }
    quick_sort(p , 0 , n - 1);
    printf("Sorted elements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d " , p[i]);
    }
    free(p);
    return 0;
}
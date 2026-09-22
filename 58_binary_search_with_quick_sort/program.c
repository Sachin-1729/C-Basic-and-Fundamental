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


void binarySearch(int *p , int low , int high, int search)
{
      int mid = low + (high - low)/2;

   if (low > high)
    {
        printf("Not found\n");
        return;
    }

      if(p[mid] == search)
      {
         printf("found the search key at %d\n", mid);
         return;
      }

      if(p[mid] < search)
      {
        binarySearch(p , mid+1 , high , search);
      }
      else{
        binarySearch(p, low , mid-1 , search);
      }



}


int main()
{
    int n;
    printf("Enter the number of elements you want in your array\n");
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));

    printf("Enter the element in array\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &p[i]);
    }
    int searchkey;
    printf("Enter the search key\n");
    scanf("%d" , &searchkey);

    //Sorting the array
    printf("Sorting....Sorted array is...\n");
    quick_sort(p , 0 , n-1);
    for(int i = 0; i < n ; i++)
    {
        printf("%d " , p[i]);
    }
    printf("\n");
    printf("Searching....\n");
    binarySearch(p , 0 , n-1, searchkey);

}
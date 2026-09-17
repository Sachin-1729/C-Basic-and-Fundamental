#include<stdio.h>
#include<stdlib.h>

void merge(int *arr , int start , int end , int mid)
{ 

    int leftSize = mid-start+1;
    int rightSize = end- (mid+1) + 1;

    int *leftPart = malloc(sizeof(int)*leftSize);
    int *rightPart = malloc(sizeof(int)*rightSize);
    int c = 0;
    int d = 0;

    for(int i = start; i<=mid; i++)
    {
        leftPart[c] = arr[i];
        c++;
    }

    for(int i = mid+1; i <=end; i++)
    {
        rightPart[d] = arr[i];
        d++;
    }

    int i = 0;
    int j = 0;
    int k = start;

    while(i < leftSize && j < rightSize)
    {
        if(leftPart[i] <= rightPart[j])
        {
            arr[k] = leftPart[i];
            i++;
            k++;
        }
        else{
          arr[k] = rightPart[j];
          j++;
          k++;
        }
    }


    while (i < leftSize)
    {
        arr[k] = leftPart[i];
        i++;
        k++;
    }


    while (j < rightSize)
    {
        arr[k] = rightPart[j];
        j++;
        k++;
    }

    free(rightPart);
    free(leftPart);

}


void mergeSort(int *arr , int start , int end )
{   


    if(start>=end)
    {
        return;
    }


    int mid = (start+end)/2;
    mergeSort(arr , start , mid);
    mergeSort(arr , mid+1 , end);
    merge(arr , start , end , mid);

}



int main()
{
    printf("Enter the size of the element\n");
    int n;
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));
    if(p== NULL)
    {
        printf("Heap memory is not available\n");
        return 0;
    }
    printf("Enter the elements\n");
    for(int i = 0; i < n; i++)
    {
         scanf("%d" , &p[i]);
    }

    printf("Merge sorting is.........working...\n");
    mergeSort(p, 0 , n-1);
    printf("Sorted Array is\n");
    for(int i = 0; i <n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}
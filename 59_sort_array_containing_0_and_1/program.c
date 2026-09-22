#include<stdio.h>
#include<stdlib.h>


void sort_zero_and_one(int *p , int n)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        while(p[low] == 0)
        {
            low++;
        }

        while(p[high] == 1)
        {
            high--;
        }

        if(p[low]==1 && p[high] == 0)
        {
            int temp = p[low];
            p[low] = p[high];
            p[high] = temp;

            low++;
            high--;
        }
    }
}


int main()
{
      printf("Enter the size of the array you want to sort\n");
      int n;
      scanf("%d" , &n);

      int *p = malloc(n*sizeof(int));

      printf("Enter the element , it should be either 0 or 1\n");

      for(int i = 0; i < n; i++)
      {
        scanf("%d" , &p[i]);
        if(p[i] != 0 && p[i] != 1)
        {
           printf("Wrong element try again\n");
           return 0;
        }
      }
      sort_zero_and_one(p , n);
      for(int i = 0; i < n; i++)
      {
        printf("%d " ,p[i]);

      }

      printf("\n");


}
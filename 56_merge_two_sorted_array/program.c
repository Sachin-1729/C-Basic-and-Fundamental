#include<stdio.h>
#include<stdlib.h>


int * mergeArray(int *a1 , int *a2 , int m , int n)
{
    int *ans = malloc((m+n)*sizeof(int));
    int p = 0;
    int q = 0;
    int k = 0;

    while(p < m && q < n)
    {
        if(a1[p] <= a2[q])
        {
            ans[k] = a1[p];
            k++;
            p++;
        }
        else{
            ans[k] = a2[q];
            k++;
            q++;
        }
    }

    while(p<m)
    {
        ans[k] = a1[p];
        p++;
        k++;
    }

    while(q<n)
    {
        ans[k] = a2[q];
        q++;
        k++;
    }
    return ans;
}


int main()
{
    printf("Enter the size of the first array\n");
    int m;
    scanf("%d" , &m);
    printf("Enter the size of the second array\n");
    int n;
    scanf("%d" , &n);

    int *p = malloc(m*sizeof(int));
    int *q = malloc(n*sizeof(int));

    if(p==NULL || q == NULL)
    {   
        printf("Memory not available for the program\n");
        return 0;
    }

    printf("Enter the first sorted array\n");
    for(int i = 0; i < m; i++)
    {
        scanf("%d" , &p[i]);
    }
    printf("Enter the second sorted array\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &q[i]);
    }

    printf("Merged array is given below\n");
    int *ans = mergeArray(p , q , m , n);
    for(int i = 0; i <m+n; i++)
    {
        printf("%d " , ans[i]);
    }
    printf("\n");
    free(ans);
    free(p);
    free(q);
}
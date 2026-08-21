#include<stdio.h>
#include<stdlib.h>

void reverse(char *p , int n)
{
    int start = 0;
    int end = 0;
    while(p[end] != '\0' && p[end] != '\n')
    {
        end++;
    }
    end = end -1;
    while(start < end)
    {
        char temp = p[start];
        p[start] = p[end];
        p[end] = temp;
        start++;
        end--;
    }

   
}

int main()
{
    printf("Enter the size of the string to find its reverse\n");
    int n;
    scanf("%d" , &n);
    getchar();
    char *p = malloc((n+1)*sizeof(char));
    if(p == NULL)
    {
        return 0;
    }
    printf("Enter the string\n");
    fgets(p, n+1, stdin);
    reverse(p , n);
    printf("%s\n" , p);
  

}
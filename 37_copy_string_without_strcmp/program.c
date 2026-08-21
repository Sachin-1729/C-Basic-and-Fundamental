#include<stdio.h>
#include<stdlib.h>




int main()
{
    char *p;
    char *q;

    printf("Enter the size of input string\n");
    int n;
    scanf("%d" , &n);
    p = malloc((n+1)*sizeof(char));
    q = malloc((n+1)*sizeof(char));

    printf("Enter the input string\n");
    getchar();  /* Very important to keep it before fgets and after printf*/
    fgets(p , n+1 , stdin);
    
    int i=0;
    while(p[i] != 0)
    {
     q[i] = p[i];
     i++;
    }
    q[i] = 0;
    printf("%s\n" , q);

}

// char str[] = "hello";       → mutable ✅
// char *str = malloc(...);    → mutable ✅
// char *str = "hello";        → don't modify ❌
// const char *str = "hello";  → cannot modify ❌
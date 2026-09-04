#include<stdio.h>

// Behavior of strcmp() is that if two string are equal it retun 0;


int strcmp(char a[] , char b[])
{
    int i = 0;
    int lena = 1;
    int lenb =1;

    while(a[lena] != '\0')
    {
        lena++;
    }
     while(b[lenb] != '\0')
    {
        lenb++;
    }

    while(a[i] == b[i]  && a[i] != '\0'  && b[i] != '\0')
    {  
        printf("%d" , i);
        ++i;

    }

        printf("%d" , lena);
    printf("%d" , lenb);
    printf("%d" , i);
    if(lena == lenb)
    {
        if(i == lena)
        {
            return 0;
        }
        else{
            return 1;
        }
    }



    return 1;
}

int main()
{
    char a[200];
    char b[200];

    printf("Enter the first string\n");
    fgets(a , 200 , stdin);
    printf("Enter the second string\n");
    fgets(b, 200 , stdin);

    if(!strcmp(a , b))
    {
        printf("Equal\n");
        return 0;
    }

    printf("Not Equal\n");
}
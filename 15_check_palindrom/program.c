#include<stdio.h>


int reverse(int n)
{  
    int ans = 0;
    while(n!=0)
    {

        int last_digit = n % 10;
        ans = ans * 10 + last_digit;
        n = n / 10;
    }

    return ans;
}

int main()
{ 

    printf("Enter the number to check the pallindrome\n");
    int n;
    scanf("%d" , &n);
    if(n == reverse(n))
    {
        printf("Yes it is pallindrome\n");
        return 0;
    }

    printf("Not pallindrome\n");


}
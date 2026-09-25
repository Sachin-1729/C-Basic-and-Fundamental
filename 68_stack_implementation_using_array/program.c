// push()
// pop()
// peek()
// isEmpty()
// isFull()
// display()   // optional

#include<stdio.h>
#include<stdlib.h>


struct Stack{
    int *data;
    int capacity;
    int top;
};

int isEmpty(struct Stack *s)
{
    if(s->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Stack *s)
{
     if(s->top == s->capacity -1)
     {  
        printf("Stack Overflow\n");
        return 1;
     }

     return 0;

}

void push(struct Stack *s , int element)
{
     if(!isFull(s))
     {
        s->top = s->top +1;
        s->data[s->top] = element;
     }
     else{ 
        printf("Stack Overflow\n");
        return;
     }
}


int pop(struct Stack *s)
{ 

    if(!isEmpty(s))
    {   

       return s->data[s->top--];
    }

    printf("Stack is empty\n");
    return -1;
}

void display(struct Stack *s)
{
    for(int i = s->top; i >=0; i--)
    {
        printf("%d\n", s->data[i]);

    }
}


void peek(struct Stack *s)
{   
    if(!isEmpty(s))
    {
      printf("The element on top is %d", s->data[s->top]);
    }

}

int main()
{
   printf("Enter the capacity of your stack\n");
   struct Stack *s = malloc(sizeof(struct Stack));
   scanf("%d", &s->capacity);
   s->data = malloc(sizeof(int)*s->capacity);
   s->top=-1;

 while (1)
{
    printf("\n========== STACK ==========\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Check Empty\n");
    printf("6. Check Full\n");
    printf("0. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
         printf("Enter the element\n");
         int n;
         scanf("%d" , &n);
         push(s, n);
        break;

        case 2:
          pop(s);
            break;

        case 3:
          peek(s);
            break;

        case 4:
            display(s);
            break;

        case 5:
         isEmpty(s);
            break;

        case 6:
           isFull(s);
            break;

        case 0:
            break;

        default:
            printf("Invalid choice\n");
            break;
    }
}

   

}
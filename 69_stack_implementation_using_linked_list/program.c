#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Stack{
    struct Node* top;

};



void push(struct Stack* s, int n)
{
   struct Node* temp = malloc(sizeof(struct Node));
  
   temp->data = n;
   temp->next= s->top;
   s->top = temp;

}

int isEmpty(struct Stack *s)
{
    if(s->top == NULL)
    {   
        printf("Stack Underflow\n");
        return 1;
    }

    return 0;
}

void pop(struct Stack* s)
{
    if(!isEmpty(s))
    {
         printf("%d", s->top->data);
         s->top = s->top->next;
    }
}



void peek(struct Stack *s)
{   
    if(!isEmpty(s))
    {
         printf("%d\n", s->top->data);
    }
    
}

void display(struct Stack *s)
{
    struct Node *p = s->top;

    while(p != NULL)
    {
        printf("%d \n", p->data);
        p =p->next;
    }
}


int main()
{
  struct Stack * s = malloc(sizeof(struct Stack));
  s->top=NULL;


while (1)
{
    printf("\n========== STACK ==========\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Check Empty\n");
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

        case 0:
            break;

        default:
            printf("Invalid choice\n");
            break;
    }
}



}
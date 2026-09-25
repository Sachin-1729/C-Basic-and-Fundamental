#include<stdio.h>
#include<stdlib.h>


struct Node
{
  int data;
  struct Node* next;
};

struct Node * createLL(int n)
{
    struct Node* head = NULL;
    struct Node* tail = NULL;

    while(n!=0)
    {  
        struct Node * temp = malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next = NULL;
  
        if(head == NULL)
        {
           head=temp;
           tail=temp;
        }
        else
        {
           tail->next=temp;
           tail=temp;
        }
        n--;
    }

    return head;

}

struct Node* reverseLL(struct Node*p)
{
    struct Node *prev = NULL;
    struct Node *current = p;
    struct Node *next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next=prev;
        prev=current;
        current=next;

    }

    return prev;

  
}

void print(struct Node *p)
{
    for(; p!=NULL; p=p->next)
    {
        printf("%d ", p->data);
    }
}




int main()
{
    printf("The idea is to reverse the linked list\n");
    printf("First we will create the linked list then reverse it\n");
    int n;
    printf("What should be the size of your linked list\n");
    scanf("%d" , &n);
    printf("Enter the element\n");
    struct Node*p = createLL(n);
    p = reverseLL(p);    
    print(p);
    



}
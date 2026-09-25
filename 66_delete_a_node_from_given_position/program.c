#include<stdlib.h>
#include<stdio.h>

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

void print(struct Node *p)
{
    for(; p!=NULL; p=p->next)
    {
        printf("%d ", p->data);
    }
}

struct Node* deleteFirstNode(struct Node *p)
{
     if(p == NULL)
     {
        return p;
     }
     else
     {
       
        p=p->next;

     }

     return p;
}

struct Node* deleteLastElement(struct Node *p)
{
    struct Node*prev= NULL;
    struct Node* current = p;

    while(current->next != NULL)
    {
       prev=current;
       current=current->next;
    }

    prev->next = NULL;
    return p;
}


struct Node* deleteatAnyPosition(struct Node*p , int pos)
{
    struct Node*prev= NULL;
    struct Node* current = p;
    pos=pos-1;

    while (pos!=0)
    {  
        prev=current;
        current=current->next;
        pos--;
    }
  
    prev->next=current->next;
    return p;
    
}

int main()
{

    printf("First we will create the linked list then reverse it\n");
    int n;
    printf("What should be the size of your linked list\n");
    scanf("%d" , &n);
    printf("Enter the element\n");
    struct Node*p = createLL(n);
    printf("Enter the valid postion you want to delete the element\n");
    int pos;
    scanf("%d", &pos);
    if(pos == 1)
    {
        p=deleteFirstNode(p);
    }
    else if(pos== n)
    {
        p=deleteLastElement(p);
    }
    else{
        p=deleteatAnyPosition(p, pos);
    }
    print(p);
    free(p);

}
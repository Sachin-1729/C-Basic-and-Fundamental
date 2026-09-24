#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;;
};

struct Node* createLL()
{ 
    struct Node * head = NULL;
    struct Node* tail = NULL;
    while(1)
    {  
       
       struct Node* temp = malloc(sizeof(struct Node));
       scanf("%d" , &temp->data);
       if(temp->data == -1)
       { 
         break;
       }
       temp->next = NULL; 

       if(head == NULL)
       {
          head=temp;
          tail=temp;
       }
       else{
        tail->next = temp;
        tail=temp;
       }
    }
    return head;
}

void insertatEnd(struct Node* p)
{
    struct Node* temp = malloc(sizeof(struct Node));
    printf("Enter the value you want to append at end\n");
    scanf("%d" , &temp->data);
    temp->next = NULL;

    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = temp;

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
    printf("First we will create linked list then append the node at the end\n");
    printf("Enter the element for linked list\n");
     printf("Enter -1 to quit\n");
    struct Node* p = createLL();
    struct Node* head = p;
    insertatEnd(p);
    print(head);

  
}
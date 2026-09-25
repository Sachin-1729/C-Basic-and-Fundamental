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


void search(struct Node*p , int key)
{
    while(p!=NULL)
    {
        if(p->data == key)
        {
            printf("We have found\n");
            return;
        }
        p=p->next;
    }

    printf("Not found\n");
    return;
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
    printf("Enter the element you want to search\n");
    int key;
    scanf("%d", &key);
    search(p,key);

    
}
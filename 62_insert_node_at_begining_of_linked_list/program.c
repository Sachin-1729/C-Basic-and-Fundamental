#include<stdio.h>
#include<stdlib.h>


struct LL{
    int data;
    struct LL * next;
};

struct LL* createLinkedList(int n)
{
    struct LL* head = NULL;
    struct LL* tail = NULL;

    for(int i = 0; i < n; i++)
    {
        struct LL* temp = malloc(sizeof(struct LL));

        scanf("%d", &temp->data);
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    return head;
}

struct LL* insertAtbegining(int n , struct LL* p)
{  
 struct LL* temp = malloc(sizeof(struct LL));
    if(p == NULL)
    {
        temp->data=n;
        temp->next = NULL;
    }
    else{
        
        temp->data=n;
        temp->next=p;
    }

    return temp;
}

void printLL(struct LL * p)
{
    while(p != NULL)
    {
        printf("%d ->", p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    printf("First we will create linked list then insert the node at begining\n");
    printf("Enter the number of element you want in the linked list\n");
    int n;
    scanf("%d" , &n);

    struct LL* p = NULL;
    printf("Enter the element\n");
    p = createLinkedList(n);
    printf("Enter the element you want to insert at begining\n");
    int key;
    scanf("%d" , &key);
    p = insertAtbegining(key, p);
    printLL(p);
    free(p);

}
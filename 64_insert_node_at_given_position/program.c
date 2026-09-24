#include<stdlib.h>
#include<stdio.h>


struct Node{
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


void insertNodeatPositoin(struct Node * p , int pos , int val)
{  

    struct Node* slow = p;
    pos--;
  

    while(pos!=0 &&p!=NULL)
    {   
     
        slow=p;
        p=p->next;
        pos--;
    }


    struct Node* temp = malloc(sizeof(struct Node));
    temp->data=val;
    temp->next=slow->next;
    slow->next=temp;


}




int main()
{
    printf("The idea is first create linked list then decide the position we have to insert the node\n");
    int n;
    printf("Enter the intial size of linked list\n");
    scanf("%d", &n);
    printf("Enter the linked list element\n");
    struct Node * p = createLL(n);
    struct Node *head = p;
    int pos;
    printf("Enter the position at which you want to insert the node\n");
    scanf("%d" , &pos);
    if(pos<1 || pos >n+1)
    {
        printf("Invalid position try again\n");
        return 0;
    }
    printf("Enter the value you want to insert\n");
    int val;
    scanf("%d", &val);
    insertNodeatPositoin(p , pos , val);
    print(head);
    return 0;


}
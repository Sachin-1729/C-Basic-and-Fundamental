#include<stdlib.h>
#include<stdio.h>


struct Linked_List_Node{
     
    int data;
    struct Linked_List_Node* next;

};

int main()
{
   printf("Enter the size of Linked List you want to create\n");
   int n;
   scanf("%d" , &n);
   printf("Enter the element\n");
   struct Linked_List_Node *p = malloc(sizeof(struct Linked_List_Node));
   struct Linked_List_Node *head = p;
   for(int i = 0; i < n; i++)
   {
     struct Linked_List_Node *temp =
            malloc(sizeof(struct Linked_List_Node));
      int x;
      scanf("%d" , &x);
       temp->data = x;
        temp->next = NULL;
      p->next=temp;
      p=temp;

   }

   p=head->next;

   while(p!=NULL)
   {
    printf("%d " , p->data);
    p=p->next;
   }
}
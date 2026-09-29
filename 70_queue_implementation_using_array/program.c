#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int *data;
    int front;
    int rear;
    int capacity;
};


void Enqueue(struct Queue *q , int ele)
{  
    if(q->front == -1 && q->rear == -1)
    {
        q->front = 0;
        q->rear = 0;
        q->data[q->rear] = ele;
    }
    else{
        if(q->rear < q->capacity-1)
        {
            q->rear=q->rear+1;
            q->data[q->rear] = ele;
        }
    }
}

void dequeue(struct Queue *q)
{
    if(q->front == -1 && q->rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("%d dequeued\n", q->data[q->front]);

    if(q->front == q->rear)
    {
        // Last element is being removed
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front++;
    }
}


void display(struct Queue *q)
{  
     if (q->front > q->rear)
    {
        printf("Queue is empty\n");
        return;
    }

    for(int i = q->front; i<= q->rear; i++)
    {
        printf("%d ",q->data[i]);
    }
    printf("\n");
}



int main()
{  
    struct Queue * p = malloc(sizeof(struct Queue));

    int size;
    printf("Enter the size of the queue\n");
    scanf("%d", &size);
    p->data = malloc(sizeof(int)*size);
    p->front=-1;
    p->rear=-1;
    p->capacity = size;


       printf("Queue Implmentation\n");

    while(1)
    {

    printf("Enqueue Press 1\n");
    printf("Dequeue Press 2\n");
    printf("Display Press 3\n");
    printf("Exit press -1\n");
    int choices;
    scanf("%d", &choices);


    switch (choices)
    {
    case 1:
       int ele;
       printf("Enter the element you want to be enqueued\n");
       scanf("%d", &ele);
       Enqueue(p, ele);
       break;

    case 2:
       dequeue(p);
       break;
    
    case 3:
       display(p);
       break;
      
    case -1:
       free(p->data);
    free(p);
    return 0;
       break;
       return 0;
    
    default:
        break;
    }


    

}

free(p);



    
}
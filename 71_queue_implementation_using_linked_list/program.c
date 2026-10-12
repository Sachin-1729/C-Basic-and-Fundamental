
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* rear;
    struct Node* front;
};

void Enqueue(struct Queue* q, int ele)
{
    struct Node* newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = ele;
    newNode->next = NULL;

    // If queue is empty
    if (q->front == NULL) {
        q->front = newNode;
        q->rear = newNode;
        return;
    }

    // Insert at the rear
    q->rear->next = newNode;
    q->rear = newNode;
}

void Dequeue(struct Queue* q)
{
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = q->front;

    // Move front to the next node
    q->front = q->front->next;

    // If queue becomes empty, rear must also be NULL
    if (q->front == NULL) {
        q->rear = NULL;
    }

    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void Display(struct Queue* q)
{
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = q->front;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main(void)
{
    struct Queue q = {NULL, NULL};

    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);

    Display(&q);

    Dequeue(&q);

    Display(&q);

    Enqueue(&q, 40);

    Display(&q);

    // Free remaining nodes
    while (q.front != NULL) {
        Dequeue(&q);
    }

    return 0;
}

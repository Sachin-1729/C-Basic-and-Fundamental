#include<stdio.h>
#include<stdlib.h>



struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};


int main()
{

//     5
//    /\
//   7  8
//  /\
// 10 12

printf("Enter the node 5\n");
int five;
scanf("%d" , &five);

struct Node * root = NULL;
struct Node * temp = malloc(sizeof(struct Node));
temp->data=five;
temp->left=NULL;
temp->right=NULL;

root = temp;

// Create left child of root: 7
struct Node *leftChild = malloc(sizeof(struct Node));

leftChild->data = 7;
leftChild->left = NULL;
leftChild->right = NULL;

root->left = leftChild;


// Create right child of root: 8
struct Node *rightChild = malloc(sizeof(struct Node));

rightChild->data = 8;
rightChild->left = NULL;
rightChild->right = NULL;

root->right = rightChild;

struct Node *node10 = malloc(sizeof(struct Node));

node10->data = 10;
node10->left = NULL;
node10->right = NULL;

leftChild->left = node10;


struct Node *node12 = malloc(sizeof(struct Node));

node12->data = 12;
node12->left = NULL;
node12->right = NULL;

leftChild->right = node12;







}


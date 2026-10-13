#include<stdlib.h>
#include<stdio.h>

struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct Stack{
    struct TreeNode *nodes[100];
    int top;
};

struct TreeNode * pop(struct Stack *s)
{  
    struct TreeNode * node;
    if(s->top != -1)
    {
    node = s->nodes[s->top];
    s->top = s->top - 1;

    }
    else
    {
        printf("Stack Underflow\n");
        return NULL;
    }

    return node;

}

void push(struct TreeNode * node, struct Stack *s)
{
    if(s->top == 99)
    {  
        printf("stack overflow\n");
        return;
    }

    s->nodes[s->top +1] = node;
    s->top=s->top+1;

   
}


void preOrderTraversal(struct TreeNode * root , struct Stack *s)
{ 
     push(root, s);
   
    while(s->top != -1){
   struct TreeNode *current = pop(s);
   printf("%d ", current->data);
     if(current->right)
     {
            push(current->right , s);
     }

     if(current->right)
     {
          push(current->left , s);
     }

    
    }
   
}

struct TreeNode* CreateBinaryTree()
{
    struct TreeNode * root = NULL;
struct TreeNode * temp = malloc(sizeof(struct TreeNode));
temp->data=5;
temp->left=NULL;
temp->right=NULL;

root = temp;

// Create left child of root: 7
struct TreeNode *leftChild = malloc(sizeof(struct TreeNode));

leftChild->data = 7;
leftChild->left = NULL;
leftChild->right = NULL;

root->left = leftChild;


// Create right child of root: 8
struct TreeNode *rightChild = malloc(sizeof(struct TreeNode));

rightChild->data = 8;
rightChild->left = NULL;
rightChild->right = NULL;

root->right = rightChild;

struct TreeNode *node10 = malloc(sizeof(struct TreeNode));

node10->data = 10;
node10->left = NULL;
node10->right = NULL;

leftChild->left = node10;


struct TreeNode *node12 = malloc(sizeof(struct TreeNode));

node12->data = 12;
node12->left = NULL;
node12->right = NULL;

leftChild->right = node12;
return root;

}

int main()
{
   struct TreeNode * root = CreateBinaryTree();
   struct Stack s;
   s.top=-1;


   preOrderTraversal(root , &s);

}
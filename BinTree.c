/* This little programm creates binary tree from user
 * input and traverses the tree inorder, preorder and
 * postorder method. Author: Kusan, Mail:kusan@aol.in 
 */


typedef struct bNode{
    char data;
    struct bNode *left;
    struct bNode *right;
}bNode;

void inorder(bNode *);
void preorder(bNode *);
void postorder(bNode *);

#include<stdio.h>
int main()
{

    bNode *T;   //pointer to the root node
    bNode *p, *q;
    T = NULL;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'A';
    p->left = NULL;
    p->right = NULL;

    T = p;
    q = T;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'B';
    p->left = NULL;
    p->right = NULL;
    q->left = p;
    q = p;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'D';
    p->left = p->right = NULL;
    q->left = p;
    q = p;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'G';
    p->left = p->right = NULL;
    q->right = p;
    q = T->left;    //q now points to the node 'B'

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'E';
    p->left = p->right = NULL;
    q->right = p;
    q = p;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'H';
    p->left = p->right = NULL;
    q->left = p;
    q = p;
    q = T;      //q now points to the node 'A'

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'C';
    p->left = p->right = NULL;
    q->right = p;
    q = p;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'F';
    p->left = p->right = NULL;
    q->left = p;
    q = p;

    p = (bNode *)malloc(sizeof(bNode));
    p->data = 'I';
    p->left = p->right = NULL;
    q->right = p;

    printf("Preorder traversal :");
    preorder(T);
    printf("\nInorder traversal :");
    inorder(T);
    printf("\nPostorder traversal :");
    postorder(T);

    return 0 ;
}

void inorder(bNode *T)
{
    if(T != NULL)
    {
        inorder(T->left);
        printf("%c ",T->data);
        inorder(T->right);
    }
    return;
}

void preorder(bNode *T)
{
    if(T != NULL)
    {
        printf("%c ",T->data);
        preorder(T->left);
        preorder(T->right);
    }
    return;
}

void postorder(bNode *T)
{
    if(T != NULL)
    {
        postorder(T->left);
        postorder(T->right);
        printf("%c ",T->data);
    }
    return;
}

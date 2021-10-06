//Accept an array and construct a binary tree

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* newNode(int data)
{
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));

    current->data=data;
    current->left=NULL;
    current->right=NULL;

    return current;
}

void input(int a[])
{
    int i;
    printf("Input 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
}

int height(struct Node *current)
{
    int l, r;
    if (current == NULL)
    {
        return 0;
    }
    else
    {
        l = height(current->left);
        r = height(current->right);

        if (l > r)
            return (l + 1);
        else
            return (r + 1);
    }
}

void printCurrentLevel(struct Node *root, int level)
{
    if (root == NULL)
    {
        printf(" ");
        return;
    }
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

void printLevelOrder(struct Node *root)
{
    int h = height(root);
    int i, j;
    for (i = 1; i <= h; i++)
    {
        for(j=i;j<=h;j++)
        {
            printf(" ");
        } 

        printCurrentLevel(root, i);
        printf("\n");
    }
}


void compare(struct Node **currentptr, int n)
{
    struct Node *current = *currentptr;
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    int x;
    int k=0;

    while (current != NULL)
    {
        x=current->data;
        if (n > x && current->right==NULL)
        {
            current->right=newNode(n);
        }
        else if(n<x && current->left==NULL)
        {
            current->left=newNode(n);
        }
        else if(n>x)
        {
            current=current->right;
        }
        else
        {
            current=current->left;
        }

    }

}


int main()
{

    struct Node *root = (struct Node*)malloc(sizeof(struct Node));
    //int a[]={9,2,3,10,14,1,23,12,5,11};
    int i, lev, l=0;
    
    int a[10];
    input(a);
    root=newNode(a[0]);
    for (i = 1; i < 10; i++)
    {
        compare(&root, a[i]);
    }

    printLevelOrder(root);    

    return 0;
}
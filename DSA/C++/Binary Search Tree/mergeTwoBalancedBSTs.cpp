/*
countNodes
mergeBSTs()
{
    1. inorder BST1.
    2. inorder BST2.
    3. merge inorders.
    4. form tree from merged inorder arrays.
}
inorder

*/

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

int countNodes(node *root)
{
    if(root==NULL)
        return 0;
    
    return 1+countNodes(root->left)+countNodes(root->right);
}

void inorderBST(node *root, int inord1[], int *inorderIndex)
{
    if(root==NULL)
        return;
    
    stack<node *> stk;
    node *curr=root;
    while(!stk.empty() || curr!=NULL)
    {
        while(curr)
        {
            stk.push(curr);
            curr=curr->left;
        }
        curr=stk.top();
        stk.pop();

        // ur working
        inord1[(*inorderIndex)]=curr->data;
        (*inorderIndex)++;

        curr=curr->right;
    }
}

int *mergeInorders(int inord1[],int inord2[],int count_root1,int count_root2)
{
    int i=0, j=0, k=0;
    int *mergedArr=new int[count_root1+count_root2];

    while(i<count_root1 && j<count_root2)
    {
        if(inord1[i]<inord2[j])
        {
            mergedArr[k]=inord1[i];
            k++;
            i++;
        }
        else if(inord2[j]<inord1[i])
        {
            mergedArr[k]=inord2[j];
            k++;
            j++;
        }
    }

    while(i<count_root1)
    {
        mergedArr[k]=inord1[i];
        k++;
        i++;
    }
    while(j<count_root2)
    {
        mergedArr[k]=inord2[j];
        k++;
        j++;
    }

    return mergedArr;
}

node *mergedBst(int mergedInord[], int start, int end)
{
    if(start>end)
        return NULL;
    
    int mid = start+(end-start)/2;
    node *root = new node(mergedInord[mid]);
    root->left = mergedBst(mergedInord, start, mid-1);
    root->right = mergedBst(mergedInord, mid+1, end);

    return root;
}

node *mergeTrees(node *root1, node *root2, int count_root1, int count_root2)
{
    int inord1[count_root1], inord2[count_root2];

    int inorderIndex=0;
    inorderBST(root1, inord1, &inorderIndex);

    inorderIndex=0;
    inorderBST(root2, inord2, &inorderIndex);

    int *mergedInord = mergeInorders(inord1, inord2, count_root1, count_root2);

    int start=0, end=count_root1+count_root2-1;
    node *root = mergedBst(mergedInord, start, end);

    return root;
}

void inorder(node *root)
{
    if(root==NULL)
        return;
    
    stack<node *> stk;
    node *curr=root;
    while(!stk.empty() || curr!=NULL)
    {
        while(curr)
        {
            stk.push(curr);
            curr=curr->left;
        }

        curr=stk.top();
        stk.pop();

        cout<<curr->data<<" ";

        curr=curr->right;
    }
}

int main()
{
    node *root1         = new node(100);
    root1->left         = new node(50);
    root1->right        = new node(300);
    root1->left->left   = new node(20);
    root1->left->right  = new node(70);
 
    /* Create following tree as second balanced BST
            80
        / \
        40 120
    */
    node *root2     = new node(80);
    root2->left     = new node(40);
    root2->right    = new node(120);
 
    int count_root1 = countNodes(root1);
    int count_root2 = countNodes(root2);

    cout<<"nodes in 1st BBST = "<<count_root1<<" nodes in 2nd BBST = "<<count_root2<<"\n";
    node *mergedTree = mergeTrees(root1, root2, 5, 3);

    cout<<"inorder of merged tree is: ";
    inorder(mergedTree);

    return (0);
}
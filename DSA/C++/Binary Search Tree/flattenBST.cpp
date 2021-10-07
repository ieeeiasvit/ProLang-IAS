#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data = data;
        left=right=NULL;
    }
};

void printList(node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->right;
    }
}

void convertToDLL(node *root, node *&head, node *prev, int f)
{
    if(!root)
        return;

    stack<node *> stk;
    struct node *curr=root;
    while(!stk.empty() || curr!=NULL)
    {
        while(curr)
        {
            stk.push(curr);
            curr=curr->left;
        }

        curr=stk.top();
        stk.pop();

        // code.
        if(f==0)
        {
            f=1;
            head=curr;
            prev=curr;
        }
        else
        {
            prev->right=curr;
            prev->right->left = prev;
            prev=prev->right;
            //cout<<curr->data<<" ";
        }

        curr=curr->right;
    }
}

node * flatten(node *root)
{
    node *head=NULL, *prev=NULL;
    int f=0;
    convertToDLL(root, head, prev, f);
    return head;
}

int main()
{
    node* root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(6);
    root->right->right = new node(8);
  
    // Calling required function
    printList(flatten(root));
  
    return 0;
}
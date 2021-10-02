#include <iostream>
#include <queue>
#include <limits.h>
using namespace std;

// Predefined BinaryTreeNode Class and takeInput function

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

//function to check if given binary tree is a bst
// For this solution we are not allowing duplicates values in the BST

bool helper(BinaryTreeNode<int> * root, int min = INT_MIN, int max = INT_MAX){
	if(root == NULL){
		return true;
    } 
    return (root->data>=min && root->data<=max && helper(root->left,min,root->data-1)&& helper(root->right,root->data+1,max));
}
bool isBST(BinaryTreeNode<int> *root) {

    return helper(root);
    
}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBST(root) ? "true" : "false");
}
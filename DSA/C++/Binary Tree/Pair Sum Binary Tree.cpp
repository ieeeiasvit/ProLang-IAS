
//Pair Sum Binary Tree
#include <bits/stdc++.h>

//// Predefined BinaryTreeNode Class and takeInput function
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

using namespace std;

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

//helper function to push All nodes Data into a vector;
void helper(BinaryTreeNode<int> *root,vector<int> &v){
 if(root==NULL){
     return;
 }
    v.push_back(root->data);
    helper(root->left,v);
    helper(root->right,v);
    
}

//this function uses helper function and then apply calculations for vectors inorder to get required pair sum. 
void pairSum(BinaryTreeNode<int> *root, int sum) {
	vector<int> v;
    helper(root,v);
    sort(v.begin(),v.end()); //Sorting of vector
    
    int i=0;
    int j=v.size()-1;
    while(i<j && i!=j){       //using two variable for keeping front and end index of our search of pair sum
        if(v[i]+v[j]>sum){
            j--;
        }
        else if(v[i]+v[j]<sum){
            i++;
        }else{
            cout<<v[i]<<" "<<v[j]<<endl;
            i++;
        }
    }
    
}

//MAIN
int main() {
    BinaryTreeNode<int>* root = takeInput();
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}
//Implementation of Binary Search Tree operations like insertion, deletion, searching, etc. in C

#include<stdio.h>
struct node* insert(struct node* node, int x);
struct node* delete(struct node* node, int x);
int search(struct node* node, int x);
struct node* findMax(struct node* node);
struct node* findMin(struct node* node);

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

int main()
{
	/* Defining a Default Tree */
	struct node* node = newNode(6);
	node->left = newNode(2);
	node->right = newNode(8);
	node->left->left = newNode(1);
	node->left->right = newNode(5);
	node->left->right->left = newNode(3);

	int choice = 0, element = NULL;
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	printf("****Tree Operations****");
	while (choice != 6)
	{
		printf("\n\nEnter the number of your choice:\n1. Insert\n2. Delete\n3. Search\n4. Find Max\n5. Find Min\n6. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			printf("Enter the element you want to insert : \n");
			scanf("%d", &element);
			node = insert(node, element);
			break;
		case 2:
			printf("Enter the element you want to delete : \n");
			scanf("%d", &element);
			node = delete(node, element);
			if (node == NULL)
				printf("Tree is empty\n");
			break;
		case 3:
			printf("Enter the element you want to search : \n");
			scanf("%d", &element);
			if (search(node, element))
				printf("%d found in the tree", element);
			else
				printf("%d not found in the tree", element);
			break;
		case 4:
			
			temp = findMax(node);
			printf("The Maximum element in the tree is %d", temp->data);
			break;
		case 5:
			temp = findMin(node);
			printf("The Minimum element in the tree is %d", temp->data);
			break;
		case 6:
			break;
		default:
			printf("Invalid Input");
		}
	}
	return 0;
}

struct node* insert(struct node* node, int x)
{
	if (node == NULL)
	{
		node = (struct node*)malloc(sizeof(struct node*));
		node->data = x;
		node->left = NULL;
		node->right = NULL;
	}
	if (x < node->data)
		node->left = insert(node->left, x);
	else if (x > node->data)
		node->right = insert(node->right, x);
	return node;
}

struct node* delete(struct node* node, int x)
{
	if (node == NULL)
		return node;
	else if (x < node->data)
		node->left = delete(node->left, x);
	else if (x > node->data)
		node->right = delete(node->right, x);
	else if (node->left && node->right)
	{
		struct node* temp = (struct node*)malloc(sizeof(struct node*));
		temp = findMin(node->right);
		node->data = temp->data;
		node->right = delete(node->right, temp->data);
	}
	else
	{
		struct node* temp = (struct node*)malloc(sizeof(struct node*));
		temp = node;
		if (node->left == NULL)
			return node = node->right;
		else if (node->right == NULL)
			return node = node->left;
		free(temp);
		return node;
	}
	return node;
}

int search(struct node* node, int x)
{
	if (node == NULL)
		return (0);
	else if (x > node->data)
		return search(node->right, x);
	else if (x < node->data)
		return search(node->left, x);
	else
		return (1);
}

struct node* findMax(struct node* node)
{
	if (node == NULL)
		return NULL;
	else if (node->right == NULL)
		return node;
	else
		return findMax(node->right);
}

struct node* findMin(struct node* node)
{
	if (node == NULL)
		return NULL;
	else if (node->left == NULL)
		return node;
	else
		return findMin(node->left);
}
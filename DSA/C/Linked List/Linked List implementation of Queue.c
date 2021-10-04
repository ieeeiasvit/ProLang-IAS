// Linked list implementation of Queue in C

#include<stdio.h>   
#include<stdlib.h>  
struct node
{
    int data;
    struct node* next;
};
struct node* front;
struct node* rear;
void insert();
void delete();
void display();
void main()
{
    printf("Implementation of Queue using Linked List\n");
    int input = 0;
    while (input != 4)
    {
        printf("\n\nEnter the number of your choice:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &input);
        printf("\n");
        switch (input)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Input\n");
        }
    }
}
void insert()
{
    struct node* ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Error : Overflow\n");
        return;
    }
    else
    {
        printf("Enter value?\n");
        scanf("%d", &item);
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}
void delete ()
{
    struct node* ptr;
    if (front == NULL)
    {
        printf("Error : Underflow\n");
        return;
    }
    else
    {
        ptr = front;
        front = front->next;
        free(ptr);
    }
}
void display()
{
    struct node* ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("Empty queue\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
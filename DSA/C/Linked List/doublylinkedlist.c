#include<stdio.h>
#include<stdlib.h>
int c;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*temp,*newnode;
void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data.\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("List is empty.\n");

    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }

}
void insert_beg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void count()
{
    int count=0;
    struct node *p;
    p=head;
    if(head==NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        while(p!=0)
        {
            count++;
            p=p->next;
        }
        printf("The length of the list is %d",count);
        c=count;
    }

}
void insert()
{
    int pos,i=0;
    printf("Enter the position after which you want enter the data:\n");
    scanf("%d",&pos);
    if(pos>c)
    {
        printf("Enter a valid position.\n");
    }
    else
    {
        struct node *prevnode,*nextnode;
        nextnode=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        while(i!=pos)
        {
            prevnode=nextnode;
            nextnode=nextnode->next;
            i++;
        }
        newnode->next=nextnode;
        nextnode->prev=newnode;
        prevnode->next=newnode;
        newnode->prev=prevnode;
    }
}
void del_beg()
{
    if(head==NULL)
    {
        printf("There are no elements in the list that can be deleted.\n");
    }
    else
    {
        temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        free(temp);
    }
}
/*void reverse()
{
    struct node *p;
    p=head;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    head =temp;
    while(temp->prev!=NULL)
    {
        temp->
    }

}
*/
int main()
{
    int choice;
    printf("1) Press 1 for entering the data.\n");
    printf("2) Press 2 for printing the data.\n");
    printf("3) Press 3 to insert data in the beginning.\n");
    printf("4) Press 4 to get the length of the list.\n");
    printf("5) Press 5 to insert data in a specific position.\n");
    printf("6) Press 6 to delete from beginning.\n");
    printf("7) Press 7 to exit.\n");
    while(choice!=7)
    {
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                create();
                break;
            }
        case 2:
            {
                display();
                break;
            }
        case 3:
            {
                insert_beg();
                break;
            }
        case 4:
            {
                count();
                break;
            }
        case 5:
            {
                insert();
                break;
            }
        case 6:
            {
                del_beg();
                break;
            }
        case 7:
            {
                exit(0);
                break;
            }
        default:
            {
                printf("Enter a valid choice.\n");
            }
        }
    }
}

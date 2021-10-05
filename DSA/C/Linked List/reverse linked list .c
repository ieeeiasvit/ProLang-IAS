#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data ;
	struct node* next;
	
};
void printlist(struct node* n)
{
	while(n !=NULL)
 {
	printf("%d\n",n->data);
	n = n->next;
 }
}
void printList(struct node* m)
{
	while(m !=NULL)
 {
	printf("%d\n",m->data);
	m = m->next;
 }
}
int main()
{
	struct node*head;
	struct node* temp;
	struct node* temp1;
	struct node* temp2;
	struct node* temp3;
	temp  = (struct node*)malloc(sizeof (struct node));
	temp1 = (struct node*)malloc(sizeof (struct node));
	temp2 = (struct node*)malloc(sizeof (struct node));
	temp3 = (struct node*)malloc(sizeof (struct node));
	
	head = temp;
	temp->data = 9;
	temp->next = temp1;
	temp1->data = 19;
	temp1->next = temp2;
	temp2->data = 29;
	temp2->next = temp3;
	temp3->data = 39;
	temp3->next = NULL;
	
	printlist(head);
	
	printf("reverse linked list\n");
	
	head = temp3;
	temp3->data = 39;
	temp3->next = temp2;
	temp2->data = 29;
	temp2->next = temp1;
	temp1->data = 19;
	temp1->next = temp;
	temp->data = 9;
	temp->next = NULL;
	
	printList(head);
	return 0;
	
}

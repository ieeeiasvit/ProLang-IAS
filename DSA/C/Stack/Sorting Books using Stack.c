// Sorting the Books in a Library using Stack

#include<stdio.h>

struct book
{
	char book_title[100];
	char author[100];
	int pages;
	int year;
};

void main()
{
	struct book buffer[100];
	struct book b[100];
	int n, top1 = -1, top2 = -1;
	printf("Enter the number of books : ");
	scanf("%d", &n);
	for (int counter = 0; counter < n; counter++)
	{
		printf("Enter the Title of the book : ");
		scanf("%s", b[counter].book_title);
		printf("Enter the Author of the book : ");
		scanf("%s", b[counter].author);
		printf("Enter the number of pages : ");
		scanf("%d", &b[counter].pages);
		printf("Enter the year of publication : ");
		scanf("%d", &b[counter].year);
		printf("\n\n");
		top1++;
	}
	while (top1 >= 0)
	{
		struct book temp = b[top1];
		while (top2 >= 0 && buffer[top2].year > temp.year)
		{
			b[top1] = buffer[top2];
			top2--;
			top1++;
		}
		top2++;
		buffer[top2] = temp;
		top1--;
	}
	printf("Book Title\tAuthor\t\tNumber of Pages\t\tYear of Publication\n\n");
	for (int counter = 0; counter <= top2; counter++)
	{
		printf("%s\t\t", buffer[counter].book_title);
		printf("%s\t\t", buffer[counter].author);
		printf("%d\t\t\t", buffer[counter].pages);
		printf("%d\n", buffer[counter].year);
	}
}
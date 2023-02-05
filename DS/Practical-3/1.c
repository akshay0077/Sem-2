/*
Define a structure Book which has members that include book_name, author_name,
price and pages. Create a structure pointer variable which collects book information
from the user and prints the book information for book_name starting with ‘D’. Also
create a function which displays all book information using pointers.


*/

#include<stdio.h>

struct book
{
		char Book_Name[10];
		char Author_Name[10];
		float price;
		int pages;
};

void display(int size,struct book *ptr){
	printf("\nBook Details\n");
	printf("Book_Name\tAuthor_Name\tprice\tpages\n");
	
	for(int i=0;i<size;i++,ptr++){
		printf("%s\t\t%s\t%.2f\t%d",(*ptr).Book_Name,(*ptr).Author_Name,(*ptr).price,(*ptr).pages);
		printf("\n");
	}
}

void (*fun)(int,struct book *);

int main()
{
		int size;
		printf("How Many Book Details You wanna Add... ");
		scanf("%d",&size);

		struct book total[size];
		struct book *ptr=total;
		fun=display;
		printf("Enter Details\n");

		for(int i=0;i<size;i++,ptr++)
		{
			printf("Enter Book Name=");
			scanf("%s",ptr->Book_Name);
			printf("Enter Author Name=");
			scanf("%s",ptr->Author_Name);
			printf("Enter Price=");
			scanf("%f",&ptr->price);
			printf("Enter Pages=");
			scanf("%d",&ptr->pages);
		}
		printf("Book Details Which IS starts With D...\n");
		printf("Book_Name\tAuthor_Name\tprice\tpages\n");
		ptr=total;

		for(int i=0;i<size;i++,ptr++){
			if(ptr->Book_Name[0]=='D'){
				printf("%s\t\t%s\t%.2f\t%d\n",ptr->Book_Name,ptr->Author_Name,ptr->price,ptr->pages);
			}
		}
		fun(size,total);
}
	
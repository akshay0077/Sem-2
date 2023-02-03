#include <stdio.h>

struct book{
    char Book_Name[100];
    char Author_Name[100];
    float price;
    int pages;
};

void display(int size,struct book *ptr){
	printf("Books details are given here : \n");
	printf("Book_Name\t\tAuthor_Name\t\tprice\t\tpages\n");

	for(int i=0; i<size; i++,ptr++){
		printf("%s\t%s\t%f\t%d\n",(*ptr).Book_Name,(*ptr).Author_Name,(*ptr).price,(*ptr).pages);
	}
}

void (*fun)(int ,struct book *);

int main(){
	return 0;
}
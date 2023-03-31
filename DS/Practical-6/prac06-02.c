#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.c"

int count = 0;
Node* top = NULL;
Node* top1 = NULL;
    

int peek() {
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        return top->info;
}

void display() {
    // Display the elements of the stack
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }
    
    printf("The stack is \n");
    while (top1 != NULL)
    {
        printf("%d--->", top1->info);
        top1 = top1->ptr;
    }
    printf("NULL\n\n");

}



int main() {
    Node* head=NULL;
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    insertNodeAtBegin(&head,10);
    insertNodeAtBegin(&head,20);
    insertNodeAtBegin(&head,30);
    insertNodeAtBegin(&head,40);

    deleteNodeAtBegin(&head);
    display();
    printf("Peek the Top elemenets : ");
   
   printf("%d\n",peek());
   display();
}


#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.c"

int main(){
    Node* head=NULL;
    insertNodeAtBegin(&head,10);
    insertNodeAtEnd(&head,20);
    insertNodeAtBegin(&head,30);
    insertNodePosition(&head,100,2);
    deleteNodeAtBegin(&head);
    deleteNodeAtEnd(&head);
    deleteNodeAtPosition(&head,1);
    printList(head);

}
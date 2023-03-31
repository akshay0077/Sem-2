#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.c"



int main() {
    Node* head = NULL;
    insertNodeAtEnd(&head,10);
    insertNodeAtEnd(&head,200);
    insertNodeAtEnd(&head,23);
    insertNodeAtEnd(&head,45);
    sortList(&head);
    printList(head);
    
    return 0;
}


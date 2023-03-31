#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
    
} Node;


void printList(Node* head) {
    if(head==NULL){
        printf("Linkedlist is empty\n");
    }

    Node* temp=head;
    while (temp != NULL) {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void insertNodeAtBegin(Node** head, int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;

    if (*head == NULL) { 
        *head = newNode;
        newNode->next = NULL;
    }
    else {
        newNode->next = *head;
        *head = newNode;
    }
}

void insertNodeAtEnd(Node** head, int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* currNode = *head;

    while (currNode->next != NULL) {
        currNode = currNode->next;
    }
    currNode->next = newNode;
}

void insertNodePosition(Node** headRef, int data, int position) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;

    Node* currNode = *headRef;
    Node* prevNode = NULL;

    if (position == 1) {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }
    else {
        for (int i = 1; i < position && currNode != NULL; i++) {
            prevNode = currNode;
            currNode = currNode->next;
        }
    }

    if (currNode == NULL && position > 1) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }
    else {
        newNode->next = currNode;
        prevNode->next = newNode;
    }
}

void deleteNodeAtBegin(Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* currNode = *headRef;
    *headRef = currNode->next;
    free(currNode);
    printf("First node deleted from list\n");
}

void deleteNodeAtEnd(Node** headRef) {
    //1. list is empty
    if (*headRef == NULL) {
        printf("List is empty\n");
        return;
    }

    //2. only one node present
    if ((*headRef)->next == NULL) {
        free(*headRef);
        *headRef = NULL;
        printf("Last node deleted from list\n");
        return;
    }
    else{
        Node* currNode = *headRef;
        Node* prevNode = NULL;

        while (currNode->next != NULL) {
            prevNode = currNode;
            currNode = currNode->next;
        }

      prevNode->next = NULL;
      free(currNode);
      printf("Last node deleted from list\n");
    }
}

void deleteNodeAtPosition(Node** headRef, int position) {
    if (*headRef == NULL) {
        printf("List is empty\n");
        return;
    }
    
    Node* currNode = *headRef;
    Node* prevNode = NULL;
    int currPos = 0;

    while (currNode != NULL && currPos != position) {
        prevNode = currNode;
        currNode = currNode->next;
        currPos++;
    }

    if (currNode == NULL) {
        printf("Position %d not found in list\n", position);
        return;
    }

    if (prevNode == NULL) {
        *headRef = currNode->next;
    } else {
        prevNode->next = currNode->next;
    }

    free(currNode);
    printf("Node at position %d deleted from list\n", position);
}

void sortList(Node** headRef) {
    Node* currNode = *headRef;

    while (currNode != NULL) {
        Node* nodeToCompare = currNode->next;

        while (nodeToCompare != NULL) {
            if (currNode->data > nodeToCompare->data) {
                int temp = currNode->data;
                currNode->data = nodeToCompare->data;
                nodeToCompare->data = temp;
            }
            nodeToCompare = nodeToCompare->next;
        }
        currNode = currNode->next;
    }
    printf("List sorted in ascending order\n");
}
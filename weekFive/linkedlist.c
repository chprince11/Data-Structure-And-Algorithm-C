#include "linkedlist.h" // this is not a lib, not coming from the system
#include <stdio.h>
#include <stdlib.h>


static Node* createNode(int); // same as private

void init(LinkedList* list){
    list->head = list->tail = NULL;
    list->nodeCount = 0;
}

Node* createNode(int num){
    Node *newNode = malloc(sizeof(Node));
    assert(newNode);
    newNode->number = num;
    newNode->next = NULL;
    return newNode;
}

void addNode(int num, LinkedList* list){
    Node *newNode = createNode(num);
    if (list->head == NULL)
    {
        list->head = list->tail = newNode;
    }
    
    else
    {
        list->tail->next = newNode;
        list->tail = newNode;
    }
   
    list->nodeCount++;

}

void deleteNode(int, LinkedList*);

void printList(LinkedList list){
    Node *current = list.head;
    for (int i = 0; i < list.nodeCount; i++) {
        printf("%d\n", current->number);
        current = current->next;    

    }
    
}


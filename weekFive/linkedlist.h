#ifndef __LINKEDLIST__H__
#define __LINKEDLIST__H__

typedef struct node_def{
    int number;
    struct node_def *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int nodeCount;
} LinkedList;

void init(LinkedList*);
void addNode(int, LinkedList*);
void deleteNode(int, LinkedList*);
void printList(LinkedList);


#endif
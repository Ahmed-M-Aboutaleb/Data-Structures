#ifndef DOUBLYLINKEDLIST_H_INCLUDED
#define DOUBLYLINKEDLIST_H_INCLUDED

typedef int DLType;

typedef struct node
{
    DLType data;
    struct node *next;
    struct node *prv;
} Node;

typedef struct list
{
    Node *head;
    int size;
} DoublyLinkedList;

void createDL(DoublyLinkedList *list);
int isEmptyDL(DoublyLinkedList *list);
void insertDL(DoublyLinkedList *list, int pos, DLType data);
void eraseDL(DoublyLinkedList *list, int pos);
void printDL(DoublyLinkedList *list);
int sizeDL(DoublyLinkedList *list);
void clearDL(DoublyLinkedList *list);

#endif // DOUBLYLINKEDLIST_H_INCLUDED

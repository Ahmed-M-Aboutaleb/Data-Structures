#ifndef DOUBLYLINKEDLIST_H_INCLUDED
#define DOUBLYLINKEDLIST_H_INCLUDED

typedef int Type;

typedef struct node {
    Type data;
    struct node* next;
    struct node* prv;
} Node;

typedef struct list {
    Node* head;
    int size;
} DoublyLinkedList;

void createList(DoublyLinkedList *list);
void insert(DoublyLinkedList *list, int pos, Type data);
void erase(DoublyLinkedList *list, int pos);
void print(DoublyLinkedList *list);
int isEmpty(DoublyLinkedList *list);
int size(DoublyLinkedList *list);

#endif // DOUBLYLINKEDLIST_H_INCLUDED

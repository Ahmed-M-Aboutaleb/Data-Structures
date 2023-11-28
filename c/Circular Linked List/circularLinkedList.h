#ifndef CIRCULARLINKEDLIST_H_INCLUDED
#define CIRCULARLINKEDLIST_H_INCLUDED

typedef int Type;
typedef struct node {
    Type data;
    struct node *next;
} Node;
typedef struct list {
    Node* head;
    int size;
} List;

void createList(List* list);
int size(List* list);
void print(List* list);
void insert(List *list, int pos, Type data);
void erase(List *list, int pos);

#endif // CIRCULARLINKEDLIST_H_INCLUDED

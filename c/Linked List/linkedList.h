#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

typedef int ListType;

typedef struct node
{
    ListType data;
    struct node *next;
} Node;

typedef struct list
{
    Node *head;
    int size;
} List;

void createList(List *list);
int isListEmpty(List *list);
void insertList(List *list, int pos, ListType data);
void eraseList(List *list, int pos);
void printList(List *list);
int sizeList(List *list);
void clearList(List *list);

#endif // LINKED_LIST_H_INCLUDED
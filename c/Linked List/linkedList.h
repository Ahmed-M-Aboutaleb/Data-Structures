#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

typedef int Type;

typedef struct node {
    Type data;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
    int size;
} List;

void init(List *list);
int isEmpty(List list);
int size(List list);
void print(List list);
void clear(List *list);
void insert(List *list, int pos, Type data);
void erase(List *list, int pos);


#endif // LINKED_LIST_H_INCLUDED
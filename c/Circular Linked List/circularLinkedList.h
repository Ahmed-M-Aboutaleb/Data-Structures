#ifndef CIRCULARLINKEDLIST_H_INCLUDED
#define CIRCULARLINKEDLIST_H_INCLUDED

typedef int Type;
typedef struct node
{
    Type data;
    struct node *next;
} Node;
typedef struct list
{
    Node *head;
    int size;
} List;

void createCL(List *list);
int isEmptyCL(List *list);
void insertCL(List *list, int pos, Type data);
void eraseCL(List *list, int pos);
void printCL(List *list);
int sizeCL(List *list);

#endif // CIRCULARLINKEDLIST_H_INCLUDED

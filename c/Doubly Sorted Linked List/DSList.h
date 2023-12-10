#ifndef DSLIST_H_INCLUDED
#define DSLIST_H_INCLUDED

typedef struct
{
    int key;
    char data;
} DSLType;
typedef struct DSLnode
{
    DSLType data;
    struct DSLnode *next;
    struct DSLnode *prv;
} DSLNode;
typedef struct DSlist
{
    DSLNode *head;
    int size;
} DSList;

void createDSL(DSList *list);
int isEmptyDSL(DSList *list);
void insertDSL(DSList *list, DSLType data);
void eraseDSL(DSList *list, int pos);
void printDSL(DSList *list);
int sizeDSL(DSList *list);

#endif // DSLIST_H_INCLUDED
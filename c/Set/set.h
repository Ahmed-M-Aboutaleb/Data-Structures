#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED

typedef int setType;
typedef struct setNode
{
    setType data;
    struct setNode *next;
} SetNode;
typedef struct{
    SetNode* head;
    int size;
} Set;

void createSet(Set *set);
int insertSet(Set *set, setType item);
int removeSet(Set *set, setType item);
int unionSet(Set *set1, Set *set2, Set *set3);
int intersectionSet(Set *set1, Set *set2, Set *set3);
int cardinalitySet(Set *set);
int isInSet(Set *set, setType item);
void printSet(Set *set);

#endif // SET_H_INCLUDED
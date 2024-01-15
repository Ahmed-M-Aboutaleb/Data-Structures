#include <stdio.h>
#include <stdlib.h>
#include "set.h"

void createSet(Set *set)
{
    set->head = NULL;
    set->size = 0;
}
int insertSet(Set *set, setType item)
{
    SetNode *travNode = set->head, *newNode = (SetNode *)malloc(sizeof(SetNode));
    newNode->data = item;
    if (!travNode || item < travNode->data)
    {
        newNode->next = travNode;
        set->head = newNode;
        set->size++;
        return 1;
    }
    while (travNode->next && travNode->next->data <= item)
    {
        travNode = travNode->next;
    }
    if (travNode->data != item)
    {
        newNode->next = travNode->next;
        travNode->next = newNode;
        set->size++;
        return 1;
    }
    return 0;
}
int removeSet(Set *set, setType item)
{
    SetNode *travNode = set->head, *prvNode = NULL;
    if (!travNode)
    {
        return 0;
    }
    if (travNode->data == item)
    {
        set->head = travNode->next;
        free(travNode);
        set->size--;
        return 1;
    }

    while (travNode && travNode->data != item)
    {
        prvNode = travNode;
        travNode = travNode->next;
    }
    if (travNode)
    {
        prvNode->next = travNode->next;
        free(travNode);
        set->size--;
        return 1;
    }
    return 0;
}
int unionSet(Set *set1, Set *set2, Set *set3)
{
    SetNode *travNode = set1->head;
    while (travNode)
    {
        insertSet(set3, travNode->data);
        travNode = travNode->next;
    }
    travNode = set2->head;
    while (travNode)
    {
        insertSet(set3, travNode->data);
        travNode = travNode->next;
    }
    return 1;
}
int intersectionSet(Set *set1, Set *set2, Set *set3)
{
    SetNode *travNode = set1->head;
    while (travNode)
    {
        if (isInSet(set2, travNode->data))
            insertSet(set3, travNode->data);
        travNode = travNode->next;
    }
    return 1;
}
int cardinalitySet(Set *set)
{
    return set->size;
}
int isInSet(Set *set, setType item)
{
    SetNode *travNode = set->head;
    while (travNode)
    {
        if (travNode->data == item)
            return 1;
        travNode = travNode->next;
    }
    return 0;
}
void printSet(Set *set)
{
    SetNode *travNode = set->head;
    printf("The Data of Set is : \n");
    while (travNode)
    {
        printf("%d\n", travNode->data);
        travNode = travNode->next;
    }
    printf("\n");
}
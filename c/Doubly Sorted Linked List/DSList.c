#include <stdio.h>
#include <stdlib.h>
#include "DSList.h"

void createDSL(DSList *list)
{
    list->head = NULL;
    list->size = 0;
}
int isEmptyDSL(DSList *list)
{
    return (list->size == 0);
}
void insertDSL(DSList *list, DSLType data)
{
    DSLNode *newNode = (DSLNode *)malloc(sizeof(DSLNode));
    newNode->data = data;
    list->size++;
    DSLNode *travNode = list->head;
    if (list->head == NULL)
    {
        newNode->prv = NULL;
        newNode->next = NULL;
        list->head = newNode;
        return;
    }
    while (data.key > travNode->data.key && travNode->next != NULL)
    {
        travNode = travNode->next;
    }
    if (travNode->data.key < data.key && travNode->next == NULL)
    {
        newNode->next = NULL;
        newNode->prv = travNode;
        travNode->next = newNode;
        return;
    }
    newNode->next = travNode;
    newNode->prv = travNode->prv;
    if (travNode->prv)
        travNode->prv->next = newNode;
    else
        list->head = newNode;
    travNode->prv = newNode;
}

void eraseDSL(DSList *list, int key)
{
    DSLNode *travNode = list->head;
    while (travNode)
    {
        if (travNode->data.key == key)
        {
            list->size--;
            DSLNode *tempNode = travNode;
            tempNode->prv->next = tempNode->next;
            tempNode->next->prv = travNode->prv;
            free(tempNode);
            return;
        }
        travNode = travNode->next;
    }
}

void printDSL(DSList *list)
{
    DSLNode *travNode = list->head;
    while (travNode != NULL)
    {
        printf("%c ", travNode->data.data);
        travNode = travNode->next;
    }
}

int sizeDSL(DSList *list)
{
    return list->size;
}

void clearDL(DSList *list)
{
    DSLNode *tempNode;
    while (list->head != NULL)
    {
        tempNode = list->head;
        list->head = tempNode->next;
        free(tempNode);
    }
    list->size = 0;
}
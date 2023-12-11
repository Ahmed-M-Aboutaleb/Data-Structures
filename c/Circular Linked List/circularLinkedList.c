#include <stdio.h>
#include <stdlib.h>
#include "circularLinkedList.h"

void createCL(List *list)
{
    list->head = NULL;
    list->size = 0;
}

int isEmptyDL(List *list)
{
    return (list->size == 0);
}

void insertCL(List *list, int pos, Type data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    list->size++;
    if (pos == 0)
    {
        newNode->next = list->head;
        list->head = newNode;
        Node *tempNode = list->head;
        int travSize = list->size + 1;
        while (--travSize)
        {
            tempNode = tempNode->next;
        }
        tempNode->next = list->head;
    }
    else
    {
        Node *tempNode = list->head;
        while (--pos)
        {
            tempNode = tempNode->next;
        }
        newNode->next = tempNode->next;
        tempNode->next = newNode;
    }
}

void eraseCL(List *list, int pos)
{
    Node *travNode = list->head;
    if (pos == 0)
    {
        int travSize = list->size;
        while (--travSize)
        {
            travNode = travNode->next;
        }
        travNode->next = list->head->next;
        travNode = list->head;
        list->head = travNode->next;
        free(travNode);
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            travNode = travNode->next;
        }
        Node *tempNode = travNode->next;
        travNode->next = tempNode->next;
        free(tempNode);
    }
    list->size--;
}

void printCL(List *list)
{
    Node *travNode = list->head;
    int i = 0;
    while (i < list->size)
    {
        i++;
        printf("%d ", travNode->data);
        travNode = travNode->next;
    }
}

int sizeCL(List *list)
{
    return list->size;
}

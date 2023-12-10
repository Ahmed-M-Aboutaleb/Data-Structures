#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void createList(List *list)
{
    list->head = NULL;
    list->size = 0;
}

int isListEmpty(List *list)
{
    return (list->size == 0);
}

void insertList(List *list, int pos, Type data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if (pos == 0)
    {
        newNode->next = list->head;
        list->head = newNode;
    }
    else
    {
        Node *travNode = list->head;
        while (--pos)
        {
            travNode = travNode->next;
        }
        newNode->next = travNode->next;
        travNode->next = newNode;
    }
    list->size++;
}

void eraseList(List *list, int pos)
{
    Node *travNode = list->head;
    if (pos == 0)
    {
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

void printList(List *list)
{
    Node *travNode = list->head;

    while (travNode != NULL)
    {
        printf("%d ", travNode->data);
        travNode = travNode->next;
    }

    printf("\n");
}

int sizeList(List *list)
{
    return list->size;
}

void clearList(List *list)
{
    Node *tempNode;

    while (list->head != NULL)
    {
        tempNode = list->head;
        list->head = tempNode->next;
        free(tempNode);
    }
    list->size = 0;
}
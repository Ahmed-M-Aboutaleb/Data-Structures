#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"

void createDL(DoublyLinkedList *list)
{
    list->head = NULL;
    list->size = 0;
}

int isEmptyDL(DoublyLinkedList *list)
{
    return (list->size == 0);
}

void insertDL(DoublyLinkedList *list, int pos, Type data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    list->size++;
    newNode->data = data;
    if (pos == 0)
    {
        newNode->next = list->head;
        newNode->prv = NULL;
        list->head = newNode;
        return;
    }
    Node *travNode = list->head;
    while (--pos)
    {
        travNode = travNode->next;
    }
    newNode->next = travNode->next;
    newNode->prv = travNode;
    travNode->next = newNode;
}

void eraseDL(DoublyLinkedList *list, int pos)
{
    Node *travNode = list->head;
    if (pos == 0)
    {
        list->head = travNode->next;
        list->head->prv = NULL;
        free(travNode);
        return;
    }
    for (int i = 0; i < pos - 1; i++)
    {
        travNode = travNode->next;
    }
    Node *tempNode = travNode->next;
    travNode->next = tempNode->next;
    tempNode->next->prv = travNode;
    free(tempNode);
    list->size--;
}

void printDL(DoublyLinkedList *list)
{
    Node *travNode = list->head;
    while (travNode != NULL)
    {
        printf("%d ", travNode->data);
        travNode = travNode->next;
    }
}

int sizeDL(DoublyLinkedList *list)
{
    return list->size;
}

void clearDL(DoublyLinkedList *list)
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
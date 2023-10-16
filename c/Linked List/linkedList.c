#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void init(List *list) {
    list->head = NULL;
    list->size = 0;
}

int isEmpty(List list) {
    return (list.size == 0);
}

int size(List list) {
    return list.size;
}

void print(List list) {
    Node *tempTrav = list.head;

    if(isEmpty(list)) {
        printf("Empty List\n");
        return;
    }

    while (tempTrav!=NULL)
    {
        printf("%d ", tempTrav->data);
        tempTrav = tempTrav->next;
    }

    printf("\n");
}

void clear(List *list) {
    if(isEmpty(*list)) {
        printf("Linked List is empty!");
        return;
    }

    Node *temp;

    while (list->head != NULL)
    {
        temp = list->head;
        list->head = temp->next;
        free(temp);
    }
}

void insert(List *list, int pos, Type data) {
    if(pos > size(*list)) {
        printf("Out of range!");
        return;
    }

    Node *newNode = (Node*)malloc(sizeof(Node));
    list->size++;
    newNode->data = data;
    if(pos == 0) {
        newNode->next = list->head;
        list->head = newNode;
    } else {
        Node *temp = list->head;
        while (--pos)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void erase(List *list, int pos) {
    if(isEmpty(*list)) {
        printf("Linked List is empty!");
        return;
    }
    if(pos > size(*list)-1) {
        printf("Out of range!");
        return;
    }
    Node *tempTrav = list->head;
    if(pos == 0) {
        list->head = tempTrav->next;
        free(tempTrav);
    } else {
        for(int i = 0; i < pos-1;i++){
            tempTrav = tempTrav->next;
        }
        Node *temp = tempTrav->next;
        tempTrav->next = temp->next;
        free(temp);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include "circularLinkedList.h"

void createList(List* list) {
    list->head = NULL;
    list->size = 0;
}

int size(List* list) {
    return list->size;
}

void print(List* list) {
    Node* travNode = list->head;
    int i = 0;
    while(i < list->size) {
        i++;
        printf("%d ", travNode->data);
        travNode = travNode->next;
    }
}
void insert(List *list, int pos, Type data) {
    if(pos > size(list)) {
        printf("Out of range!");
        return;
    }
     Node *newNode = (Node*)malloc(sizeof(Node));
    list->size++;
    newNode->data = data;
    if(pos == 0) {
        newNode->next = list->head;
        list->head = newNode;
        Node *temp = list->head;
        int travSize = list->size;
        while(--travSize) {
            temp = temp->next;
        }
        temp->next = list->head;
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
    if(size(list) == 0) {
        printf("Linked List is empty!");
        return;
    }
    if(pos > size(list)-1) {
        printf("Out of range!");
        return;
    }
    Node *tempTrav = list->head;
    list->size--;
    if(pos == 0) {
        int travSize = list->size+1;
        while(--travSize) {
            tempTrav = tempTrav->next;
        }
        tempTrav->next = list->head->next;
        tempTrav= list->head;
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

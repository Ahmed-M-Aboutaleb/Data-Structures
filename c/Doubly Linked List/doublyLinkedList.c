#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"

void createList(DoublyLinkedList *list) {
    list->head = NULL;
    list->size = 0;
}

void insert(DoublyLinkedList *list, int pos, Type data) {
    if(pos > size(list)) {
        printf("Out of range!");
        return;
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    list->size++;
    newNode->data = data;
    if(pos == 0) {
        newNode->next = list->head;
        newNode->prv = NULL;
        list->head = newNode;
        return;
    }
    Node* travNode = list->head;
    while(--pos) {
        travNode = travNode->next;
    }
    newNode->next = travNode->next;
    newNode->prv = travNode;
    travNode->next = newNode;
}

void erase(DoublyLinkedList *list, int pos) {
    if(isEmpty(list)) {
        printf("Linked List is empty!");
        return;
    }
    if(pos > size(list)-1) {
        printf("Out of range!");
        return;
    }
    Node *travNode = list->head;
    if(pos == 0) {
        list->head = travNode->next;
        list->head->prv = NULL;
        free(travNode);
        return;
    }
    for(int i = 0; i < pos-1;i++){
        travNode = travNode->next;
    }
    Node *temp = travNode->next;
    travNode->next = temp->next;
    temp->next->prv = travNode;
    free(temp);
}

int isEmpty(DoublyLinkedList *list) {
    return (list->size == 0);
}

int size(DoublyLinkedList *list) {
    return list->size;
}

void print(DoublyLinkedList *list) {
    Node* travNode = list->head;
    while(travNode != NULL) {
        printf("%d ",travNode->data);
        travNode = travNode->next;
    }
}

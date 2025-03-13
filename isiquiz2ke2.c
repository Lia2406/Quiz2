#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void initList(LinkedList* list) {
    list->head = NULL;
}

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = value;
        newNode->next = NULL;
    }
    return newNode;
}

void insertFirst(LinkedList* list, int value) {
    Node* newNode = createNode(value);
    if (newNode == NULL) {
        printf("Gagal menambahkan elemen: Memori penuh!\n");
        return;
    }
    newNode->next = list->head;
    list->head = newNode;
    printList(list);
}

void insertLast(LinkedList* list, int value) {
    Node* newNode = createNode(value);
    if (newNode == NULL) {
        printf("Gagal menambahkan elemen: Memori penuh!\n");
        return;
    }
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        Node* temp = list->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printList(list);
}

void deleteFirst(LinkedList* list) {
    if (list->head == NULL) {
        printf("Gagal menghapus elemen: List kosong!\n");
        return;
    }
    Node* temp = list->head;
    list->head = temp->next;
    free(temp);
    printList(list);
}

void printList(LinkedList* list) {
    Node* temp = list->head;
    printf("Elemen List: { ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("}\n");
}


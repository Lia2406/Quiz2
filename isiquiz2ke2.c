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

void insertAfter(LinkedList* list, int afterValue, int value) {
    Node* temp = list->head;
    while (temp != NULL && temp->data != afterValue) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Elemen %d tidak ditemukan, tidak bisa menyisipkan %d!\n", afterValue, value);
        return;
    }
    Node* newNode = createNode(value);
    if (newNode == NULL) {
        printf("Gagal menambahkan elemen: Memori penuh!\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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

void deleteLast(LinkedList* list) {
    if (list->head == NULL) {
        printf("Gagal menghapus elemen: List kosong!\n");
        return;
    }
    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
    } else {
        Node* temp = list->head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    printList(list);
}

void deleteValue(LinkedList* list, int value) {
    if (list->head == NULL) {
        printf("Gagal menghapus elemen: List kosong!\n");
        return;
    }
    if (list->head->data == value) {
        deleteFirst(list);
        return;
    }
    Node* temp = list->head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("Elemen %d tidak ditemukan!\n", value);
        return;
    }
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    printList(list);
}

void deleteAll(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        Node* toDelete = temp;
        temp = temp->next;
        free(toDelete);
    }
    list->head = NULL;
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


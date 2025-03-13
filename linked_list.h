// linked_list.h
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

// Struktur Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Struktur ADT LinkedList
typedef struct {
    Node* head;
} LinkedList;

// Deklarasi fungsi
LinkedList buatLinkedList();
Node* buatNode(int data);
void tampilkanList(LinkedList* list);
void insertFirst(LinkedList* list, int data);
void insertLast(LinkedList* list, int data);
void insertAfter(LinkedList* list, int afterValue, int data);
void deleteFirst(LinkedList* list);
void deleteLast(LinkedList* list);
void deleteValue(LinkedList* list, int data);
void hapusSemua(LinkedList* list);

#endif // LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
    LinkedList list;
    initList(&list);

    // 1) Masukkan bilangan 7 sebagai elemen pertama
    insertFirst(&list, 7);

    // 5) Masukkan bilangan 13 di akhir list
    insertLast(&list, 13);

    // 8) Hapus elemen pertama (bilangan 5)
    deleteFirst(&list);

    return 0;
}


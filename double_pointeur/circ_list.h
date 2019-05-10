#ifndef DOUBLE_POINTEUR_CIRC_LIST_H
#define DOUBLE_POINTEUR_CIRC_LIST_H
#include <stdbool.h>


typedef struct Element {
    void* content;
    struct Element* next;
} Element;
Element* list_create();
bool list_empty(Element* head);
unsigned int list_count(Element* head);
Element* list_move(Element* head);
Element* list_insert_after(Element* head, void* data);
Element* list_insert_before(Element* head, void* data);
Element* list_search(Element* head,void* data,int (*compare)(void*, void*));
Element* list_remove(Element* head, void* data, int (*compare)(void*, void*));

#endif //DOUBLE_POINTEUR_CIRC_LIST_H

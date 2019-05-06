#include "circ_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


Element* list_create(){
    void* new_list;
    return new_list;
}

bool list_empty(Element* head){
    if (head == NULL){
        return true;
    } else {
        return false;
    }
}

unsigned int list_count(Element* head){
    int i = 0;
    while (head != NULL){
        i++;
    }
    return i;
}

Element* list_move(Element* head){
    return head->next;
}

Element* list_insert_after(Element* head, void* data){
    Element insere;
    insere.content = data;
    insere.next = head->next;
    head->next = &insere;
    return &insere;
}

Element* list_insert_before(Element* head, void* data){
    Element insere;
    insere.content = data;
    insere.next = head;
    return &insere;
}

Element* list_search(Element* head ,void* data ,int (*compare)(void*, void*)){
    Element* pointeur = head;
    while((*compare)(pointeur->content, data)){
        pointeur = pointeur->next;
        if (pointeur == NULL){
            break;
        }
    }
    return pointeur;
}

Element* list_remove(Element* head, void* data, int (*compare)(void*, void*)){
    Element* pointeur = list_search(head, data, &compare);
    if(pointeur != NULL){
        Element supprime = *pointeur;
        supprime.next = NULL;
    }
    return pointeur;
}

void list_free(Element* head, void (*data_free)(void*)){
    Element* pointeur = head;
    while(pointeur != NULL){
        pointeur->content = NULL;  // comment liberer de la mémoire (utiliser malloc?)
        pointeur = pointeur->next;
    }
}




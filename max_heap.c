#include <stdio.h>
#include <stdlib.h>

#include "max_heap.h"

struct heap
{
    unsigned int* dados;
    unsigned int cap;
    unsigned int qtde;
};

heap_max* criar_heap(int cap){
    heap_max* nova = (heap_max*) malloc(sizeof(heap_max));
    if(nova == NULL)
        return NULL;
    
    nova->dados = (int*) malloc(cap * sizeof(int));
    if(nova->dados == NULL){
        free(nova);
        return NULL;
    }

    nova->qtde = 0;
    nova->cap = cap;

    return nova;
}

bool cheia_heap(heap_max* H){
    if(H == NULL)
        return false;

    return H->qtde == H->cap;
    
}

bool vazia_heap(heap_max* H){
    if(H == NULL)
        return false;
    
    return H->qtde == 0;
}

bool esvaziar_heap(heap_max* H){
    if(H == NULL)
        return false;

    H->qtde = 0;
    return true;
}


#ifndef MAX_HEAP_H
#define MAX_HEAP_H
#include <stdbool.h>

typedef struct heap heap_max;

heap_max* criar_heap(int cap);

bool cheia_heap(heap_max* H);

bool vazia_heap(heap_max* H);

bool esvaziar_heap(heap_max* H);

#endif // MAX_HEAP_H
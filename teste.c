#include <stdio.h>
#include <stdlib.h>
#include "max_heap.h"

int main() {
    printf("------ TESTE BASICO ------\n");

    heap_max* h1 = criar_heap(20);
    if(h1 == NULL)
        exit(EXIT_FAILURE);

    printf("> Inserir elementos\n");
    int i;
    for(i = 1; i <= 20; i++) {
        if(inserir_heap(h1, i))
            printf("\nInsercao de %d com sucesso", i);
        else
            printf("Valor %d nao inserido", i);
        
        exibir_heap_arvore(h1);
        printf("\n");
    }
    
    printf("> Remover todos os elementos\n");
    while(!vazia_heap(h1)) {
        printf("%d ", remover_heap(h1));
    }
    printf("\n");
    liberar_heap(&h1);

    printf("\n\n>>>> INSERIR os elementos de um vetor \n");
    int vetor[] = {50, 29, 33, 21, 11, 78, 66, 99},
        tam = sizeof(vetor)/sizeof(int);
    for(int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    heap_max* h2 = criar_heap(20);
    if(h2 == NULL)
        exit(EXIT_FAILURE);
    
    inserir_vet_heap(h2, vetor, tam);
    exibir_heap(h2);
    printf("\n");

    printf("\n> REMOVER\n");
    int r;
    while(!vazia_heap(h2)) {
        r = remover_heap(h2);
        if(r != -1)
            printf("\nRemocao efetuada com sucesso. Valor removido: %d.", r);
        else
            printf("\nRemocao nao efetuada.");
        exibir_heap(h2);
        printf("\n");
    }

    liberar_heap(&h2);

    return 0;
}
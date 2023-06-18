//TAD ARVORE BINARIA DE BUSCA           JOAO VICTOR SOUZA - ECOMP
#ifndef ABBINT_H
#define ABBINT_H
#include <stdbool.h>

typedef struct no no_arv;

no_arv* criar_abb(int valor);

no_arv* inserir_abb(no_arv* no, int valor);

void percorrer_abb(no_arv* no);

no_arv* minimo_abb(no_arv* no);

bool buscar_abb(no_arv* no, int valor);

void busca_largura_abb(no_arv* no);


#endif //ABBINT_H
#include <stdio.h>
#include "listaenc_int.h"

int main() {
    lista_le* L = criar_le();

    for(int i = 1; i <= 10; i++)
        if(inserir_fim_le(L, i))
            printf("%d inserido com sucesso\n", i);
        else
            printf("Erro na insercao de %d\n", i);
    printf("\n");
    exibir_le(L);
    inserir_fim_le(L, 100);
    inserir_inicio_le(L, -100);
    printf("\n");
    
    exibir_le(L);
    printf("\n");

    while(!vazia_le(L)) {
        int r;
        remover_inicio_le(L, &r);
        exibir_le(L); printf("\n");
    }

    L = liberar_le(L);

    return 0;
}
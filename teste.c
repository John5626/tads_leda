#include <stdio.h>
#include <stdlib.h>
#include "lista_dp_enc.h"

int main() {
    lista_dp* lista = criar_dp(); // Cria uma nova lista

    // Inserção de elementos na lista
    inserir_fim_dp(lista, 10);
    inserir_fim_dp(lista, 20);
    inserir_inicio_dp(lista, 5);
    inserir_meio_dp(lista, 15, 2);

    // Exibe a lista
    exibir_dp(lista);

    // Verifica o tamanho da lista
    printf("\nTamanho da lista: %d\n", tamanho_dp(lista));

    // Verifica se a lista está vazia
    if (vazia_dp(lista)) {
        printf("A lista está vazia.\n");
    } else {
        printf("A lista não está vazia.\n");
    }

    // Busca um elemento na lista
    if (buscar_seq_dp(lista, 20)) {
        printf("O elemento 20 está na lista.\n");
    } else {
        printf("O elemento 20 não está na lista.\n");
    }

    // Remove elementos da lista
    int valor_removido;
    remover_inicio_dp(lista, &valor_removido);
    printf("Valor removido do início: %d\n", valor_removido);
    remover_fim_dp(lista, &valor_removido);
    printf("Valor removido do fim: %d\n", valor_removido);

    // Exibe a lista após as remoções
    exibir_dp(lista);

    // Libera a memória alocada pela lista
    liberar_dp(lista);

    return 0;
}

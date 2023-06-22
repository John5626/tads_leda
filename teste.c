#include <stdio.h>
#include "abb_int.h"

int main() {
    /*
                    20
                 /     \
               5        30
             /   \     /  \
            1    15   25  40
                /           \
              9             45
            /   \         /
           7     12      42
    */
    no_arv* raiz = criar_abb(20);
    inserir_abb(raiz, 5);
    inserir_abb(raiz, 1);
    inserir_abb(raiz, 15);
    inserir_abb(raiz, 9);
    inserir_abb(raiz, 7);
    inserir_abb(raiz, 12);
    inserir_abb(raiz, 30);
    inserir_abb(raiz, 25);
    inserir_abb(raiz, 40);
    inserir_abb(raiz, 45);
    inserir_abb(raiz, 42);

    percorrer_abb(raiz);
    printf("\n");
    busca_largura_abb(raiz);
    printf("\n");

    raiz = remover_abb(raiz, 1);
    /*
                   20
                /      \
               5       30
                  \   /  \
                  15 25   40
               /             \
              9              45
           /     \         /
          7      12       42
    */
    percorrer_abb(raiz);
    printf("\n");
    busca_largura_abb(raiz);
    printf("\n");
    raiz = remover_abb(raiz, 40);
    /*
                    20
                /       \
               5        30
                \      /  \
                15    25  45
                /        /   
               9        42    
            /     \        
           7      12      
    */
    percorrer_abb(raiz);
    printf("\n");
    busca_largura_abb(raiz);
    printf("\n");
    raiz = remover_abb(raiz, 45);
    /*
                    20
                /       \
               5        30
                  \    /  \
                  15  25  42
                 /          
               9            
            /     \        
           7      12      
    */
    percorrer_abb(raiz);
    printf("\n");
    busca_largura_abb(raiz);
    printf("\n");
    raiz = remover_abb(raiz, 9);
    /*
                    20
                /       \
               5        30
                  \    /  \
                  15  25  42
                /            
               12            
            /             
           7            
    */
    percorrer_abb(raiz);
    printf("\n");
    busca_largura_abb(raiz);
    printf("\n");


    return 0;
}
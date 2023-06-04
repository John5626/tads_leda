//JOAO VICTOR - ECOMP                                   // Arquivo quadrado.h

#ifndef QUADRADO_H // include guard                                      
#define QUADRADO_H

//Encapsulamento dos dados

typedef struct quadrado quad;
typedef struct ponto ponto2D;

//Protótipos 

/*
Cria um quadrado com vértice inferior esquerdo nas coordenadas (x,y) e medida de lado l
Entrada: coordenadas do vértice inferior esquerdo e medida de lado
Saída: referência para o quadrado criado
*/
quad* criar_q(float x, float y, float l);

/*
Calcula a área de um quadrado
Entrada: referência para o quadrado
Saída: área do quadrado
*/
float calc_area(quad* q);

/*
Calcula o perímetro de um quadrado
Entrada: referência para o quadrado
Saída: perímetro do quadrado
*/
float calc_perimetro(quad* q);

/*
Exibe R e l de um quadrado
Entrada: referência para o quadrado
Saída: nenhum
*/
void exibir_q(quad* q);

/*
Verifica se um ponto está dentro de um quadrado
Entrada: referência para o quadrado e referência para o ponto
Saída: 1 se o ponto está dentro do quadrado, 0 caso contrário
*/
int intersecao_p(quad* q, ponto2D* p);
/*
Identifica em qual quadrante está o quadrado
Entrada: referência para o quadrado
Saída: um número inteiro indicando em qual quadrante está o quadrado
        1 -> 1º quadrante, 
        2 -> 2º quadrante, 
        3 -> 3º quadrante,
        4 -> 4º quadrante e
        0 -> caso o quadrado tenha interseção com mais de um quadrante.
*/
int quadrante_q(quad* q);

#endif // QUADRADO_H



//JOAO VICTOR - ECOMP                               // Arquivo quadrado.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "ponto2D.h"
#include "quadrado.h"

//REGISTROS
struct ponto
{
    float x, y;
};

struct quadrado
{
    ponto2D R;
    float l;
    
};

//IMPLEMENTAÇÃO DOS PROTÓTIPOS

quad* criar_q(float x, float y, float l){
    quad* novo = (quad*) calloc(1, sizeof(quad));
    if(novo != NULL){
        novo->R.x = x;
        novo->R.y = y;
        novo->l = l;
        printf("\ncriado com sucesso");
    }
    return novo;
}

float calc_area(quad* q){
    float area = pow(q->l, 2);
    
    return area;
}

float calc_perimetro(quad* q){
    float peri = 4 * q->l;
    
    return peri;
}

void exibir_q(quad* q){
    printf("R: (%.2f, %.2f) \nl = %.2f", q->R.x, q->R.y, q->l);
   
}

int intersecao_p(quad* q, ponto2D* p){

    if(p->x >= q->R.x && p->y >= q->R.y){
        if(p->x <= (q->R.x + q->l) && p->y <= (q->R.y + q->l)){
            
            return 1; // Ponto dentro do quadrado
        }  
    }
    return 0; // Ponto fora do quadrado
}

int quadrante_q(quad* q){
    if(q->R.x > 0 && q->R.y > 0)
        return 1;
    
    if(q->R.x < 0 && q->R.y > 0   &&  (q->R.x + q->l) <= 0 &&  (q->R.y + q->l) <= 0)
        return 2;

    if(q->R.x < 0 && q->R.y < 0   &&  (q->R.x + q->l) <= 0 &&  (q->R.y + q->l) <= 0)
        return 3;

    if(q->R.x > 0 && q->R.y < 0)
        return 4;
    else
        return 0;
}



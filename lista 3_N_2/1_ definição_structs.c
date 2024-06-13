#include <stdio.h>
#include <math.h>

typedef struct Ponto
{
    float x, y;
};

float d(struct Ponto ponto){

    /*raiz quadra*/sqrt(ponto.x * ponto.x + ponto.y * ponto.y);

}

int main(struct Ponto ponto){
    
    printf("digite o X: \n");
    scanf("%d", &ponto.x);

    
    printf("digite o y: \n");
    scanf("%d", &ponto.y);

    float resultado = d(ponto);

    printf("resultado %d \n", resultado);

}
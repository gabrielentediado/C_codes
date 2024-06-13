#//alocção dinamica e estática
#include <stdlib.h>
#include <stdlib.h>
//,malloc, free

void imprimir(int *vetor, int tamanho){

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", vetor[i]);
    }
    
}

void estatica(){

    int vetor[]={1,3,6,8,10}; //declaração do array e passando valores
    int tamanho = sizeof(vetor)/sizeof(vetor[0]); //tirando o 0 do array

    imprimir(vetor, tamanho); //chama a função imprimir passando os valores do array e o tamanho

}

void imprimir_2(int *vetor_dinamico, int tamanho){

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor_dinamico[i]);
    }
    

}

void dinamica(){
    int tamanho;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int *vetor_dinamico = malloc(tamanho * sizeof(int)); 

    for (int i = 0; i < tamanho; i++)
    {
        
    }
    

    imprimir_2(vetor_dinamico);
}


int main(){

    dinamica();

}
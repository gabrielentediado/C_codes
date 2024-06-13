#include <stdio.h>
#include <locale.h>
int main(){
    
    int pergunta;

    printf("qual exercicio? ");
    scanf("%d", &pergunta);

    switch (pergunta)
    {
    case 1:
        exercicio_1();
        break;

    case 2:
        exercicio_2();
        break;

    case 3:
        exercicio_3();
        break;

    case 4:
        exercicio_4();
        break;

    default:
        break;

    }


}
// 1 - Soma de elementos em um vetor:
// Escreva um programa que calcula a soma de todos os
// elementos em um vetor.


void exercicio_1()
{
    
    int a, b, quant_elementos, target;

    printf("quantidade de numeros? ");
    scanf("%d", &quant_elementos);
    
    int array[quant_elementos];

    for (int i = 0; i < quant_elementos; i++)
    {
        printf("digito o numero %d ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("qual soma está procurando?");
    scanf("%d", &target);
    
    for (a = 0; a < quant_elementos; a++)
    {
        for (b = a + 1; b < quant_elementos; b++)
        {
           if (array[a] + array[b] == target)
           {
            printf("somas dos digitos %d + %d = %d", array[a], array[b], target);
           }
           
        }
        
    }
    

}


// 2 - Maior elemento em um vetor:
// Escreva um programa que encontre o
// maior elemento em um vetor.

void exercicio_2(){

    int quant_numero_2, a,b, maior;

    printf("quantidade de numeros ");
    scanf("%d", &quant_numero_2);

    int array_2[quant_numero_2];

    for (int i = 0; i < quant_numero_2; i++)
    {
        printf("digite o numero %d ", i+1);
        scanf("%d", &array_2[i]);
    }
    

    for (int a = 0; a < quant_numero_2; a++)
    {
        for (b = a + 1; b < quant_numero_2; b++)
        {
           
            if (array_2[a] < array_2[b])
            {
                maior = array_2[b];

             }else if(array_2[a] > array_2[b])
             {

                maior = array_2[a];
            }
        }
    }
    printf("o maior numero %d ", maior);

}

// 3 - Média dos elementos em um vetor:
// Escreva um programa que calcule a média
// dos elementos em um vetor.

void exercicio_3(){

    int quantidade, soma;

    printf("são quantos numeros? ");
    scanf("%d", &quantidade);

    int array[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        printf("digite o número %d ", i+1);
        scanf("%d", &array[i]);

        soma =+ array[i];
    }
    
    printf("a média é: %d", soma/quantidade);
}


// 4 - Inversão de vetor:
// Escreva um programa que inverta a
// ordem dos elementos em um vetor.

void exercicio_4(){

    int quantidade, i=0;

    printf("quais são quantos numeros? ");
    scanf("%d", &quantidade);

    int array[quantidade];

    for (i; i < quantidade; i++)
    {
        printf("digite o número %d ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("os numeros ao contrário: %d \n");

    for (int j = (quantidade-1); j >= 0; j--)
    {
        printf("%d \n", array[j]);
    }
    
}


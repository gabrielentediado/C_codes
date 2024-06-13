#include <stdio.h>
#include <stdlib.h> //bibliote para pode usar o stdin
#include <string.h> //biblioteca de manipulação de strings
#include <locale.h> //biblioteca de utilização de acentos

//tutorial:

//gets não deixa estrapolar, não é seguro, invade espaço de memória

//fgets deixa estrapolar, não invade espaço de memória, é o recomendado

//scanf melhor para int, float, uma letra

//strcpsn


//--------------------------------------------------------EXEMPLOS:-----------------------------------------------------------------------

int main(void){
    
   
    #define i 30 //define o i como 30
    
    
    
    //ENTRADA OU INPUTS:

    //--------------------------------------com o scanf -----------------------------------------------
    
    
        
    char nome[i], sobre[i];
    
    printf("digite seu nome: (scanf normal): ");
    scanf("%s", nome);
    
    printf("digite seu sobrenome: (scanf normal): ");
    scanf("%s", sobre);
    
    printf("olá, %s %s \n", nome, sobre);
    
    
    //---------------------------------com o scanf aprimorado----------------------------------------------
    
    
    getchar(); // para resolver o problema de buffer
    
    char nome_scanf_aprimorado[i];
    
    puts("digite novamente seu nome e sobrenome (scanf aprimorado): ");
    
    scanf("%i[^\n]s", nome_scanf_aprimorado);
    
    fflush(stdin);
    
    printf("seu nome e sobrenome: %is \n", nome_scanf_aprimorado);

    
    //--------------------------------------com o fgets----------------------------------------------------
    
    getchar(); // para resolver o problema de buffer
    
    char nome_fgets[i];
    
    printf("digite novamente seu nome e sobrenome: ");
    
    fgets(nome_fgets, i, stdin);
    fflush(stdin);
    
    printf("seu nome e sobrenome: %is", nome_fgets);

    
    //UTILIDADES DO STRING.H:

    //---------------------------------------STRCPY--------------------------------------------------------

    //copia a variável na outra

    getchar(); // para resolver o problema de buffer

    char nome_1[i] ="", nome_2[i]="Victor";

        //destino <-----
    strcpy(nome_1, nome_2);
                  //origem


    printf("nome copiado %s \n", nome_1);

    //---------------------------------------STRCAT--------------------------------------------------------

    //concatena uma variável na outra

    getchar(); // para resolver o problema de buffer

    char nome_0[i] ="VICTOR", nome_1[i]="ZEREFOS";

         //destino <---
    strcat(nome_0, nome_1);
                   //origem 

    printf("nome copiado %s \n", nome_0);
    
    //---------------------------------------STRCMP--------------------------------------------------------

    //Compara uma variável com a outra, se forem iguais retornam o valor 0, diferentes o valor 1.

    getchar(); // para resolver o problema de buffer

    char nome_0[i] ="VICTOR", nome_1[i]="ZEREFOS";

    if (strcmp(nome_0, nome_1) == 0)
    {

        printf("valores iguais");

    }else{

        printf("são diferentes");

    }

}

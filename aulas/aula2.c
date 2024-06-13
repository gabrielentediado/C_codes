#include <stdio.h>

int main(){

    /*
            usando o GETCHAR em vez 
            do SCANF
    char letra;
    
    printf("digite uma letra  ");
    letra= getchar();

    printf("letra digitada: %c", letra);

    */

   /*
        criando uma variavel DO TIPO CHAR DE UMA LETRA com = '' 

   char letra;
   letra = 'a';

   printf("%c", letra);

   */

  /*

              CRIAR STRINGS / FRASES

  char nome[] = "gabriel";
  
  printf("o nome %s", nome);
  
    

  
  
  */

//EXEMPLOS

  char nome[10]; //variavel nome com entrada de 10
  char nome2[10]; //variavel nome 2 com entrada de 10 caracteres

  
  printf("o nome \n"); 
  
  scanf("%s", &nome); //input do nome 1 com entrada de 10 caracteres
  
  printf("nome 2 \n"); 
  
  scanf("%s", &nome2); //input do nome 2 com entrada de 10 caracteres

  printf("os nomes %2s \n %3s", nome, nome2);


}
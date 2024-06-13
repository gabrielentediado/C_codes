#include <stdio.h>
#include <string.h>

int main(){
    //1

    int array[5] = {1,2,3,4,5};
    int soma;
    for (int i = 0; i < 5; i++)
    {
        soma = soma + array[i]; 
    }
    
    printf("%d", soma);

    //2
   
    float array_2[] = {1.5, 2.5, 3.5, 4.5, 5.5}, soma_2;
    
    for (int i = 0; i < 5; i++)
    {
        soma_2 = soma_2 + array_2[i]; 
    }

    printf("a media: %.2f", soma_2/5);


    //3
    char nome[30];

    printf("digite um nome: \n");

    scanf("%s", nome);
    
    fflush(stdin);
    
    int contagem = strlen(nome); 

    printf("a contagem de strings: %d", contagem);

     //4

     char palavra[3] [20];

    for (int i = 0; i < 2; i++)
    {
        printf("digite a %d palavra \n", i+1);
        scanf("%19s", palavra[i]);
        
    }
    
    strcat(palavra[2], palavra[1]);

    for (int i = 0; i < 3; i++)
    {
        printf("palavras concatenadas %d°: %s \n", i+1, palavra[i]);
    }
    

}

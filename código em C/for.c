#include <stdio.h>

//listador de nomes

int main() //chama a função chamar
{
    chamar();
    return 0;
}


int chamar(void){

    //em vez do if and else poderia utilizar o switch

    //listar nomes
    int numero;

    printf("\n 1 para o listador \n 2 para a calculadora \n 3 para acabar \n");
   
    scanf("%d", &numero);

    if (numero == 1) //se o usuario digitar 1 executa codigo abaixo

    {

    int i, quantidade;

    printf("numero de pessoas \n");
 
    scanf("%d", &quantidade);
    char nomes[quantidade] [10];

    for(i = 0; i < quantidade; i++)

    {
        printf("digite os nomes ");
        scanf("%10s", &nomes[i]);

    }    

    for (i = 0; i < quantidade; i++)
    {
         printf("%10s \n", nomes[i]);
    }

    }

    //calculadora
    if (numero==2) //se o usuário digitar 2 irá executar o código abaixo
    {
        int numero_1, numero_2, pergunta_2;
        
        puts("digite um numero");
        scanf("%d", &numero_1);

        puts("digite outro numero");
        scanf("%d", &numero_2);

        printf("digite: \n 1 para soma \n 2 para subtrair \n 3 para multiplicar \n 4 para dividir \n ");
        scanf("%d", &pergunta_2);

        switch (pergunta_2)
        {
        case 1:
            
            printf("%d", numero_1 + numero_2);
            
            break;
        
        case 2:

            printf("%d", numero_1 - numero_2);

            break;
     
        case 3:
        
            printf("%d", numero_1 * numero_2);
        
            break;
        
        case 4:
         
            printf("%d", numero_1 / numero_2);
            
            break;    
            
        }

    }

    else{ //se o usuário digitar qualquer outra coisa irá executar o código abaixo

        char pergunta[3];
        printf("Acabou!");
        printf("tentar novamente digite 'sim' ");
        scanf("%3s", pergunta);
        
        
        if (pergunta == "sim")
        {
            return chamar();
        }
    
    }

}
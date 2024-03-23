#include <stdio.h>
#include <string.h>


//listador de nomes

int main(void) //chama a função login
{
    login();
}


void login(){


    char user[20], senha, senha2;
    int idade;

    printf("digite seu nome ");
    scanf("%s", &user);

    printf("Bem-vindo, %s", user);

    printf("\nqual a sua idade? ");
    scanf("%d", &idade);

    printf("digite uma senha ");
    scanf("%d", &senha);

    printf("digite novamente a sua senha ");
    scanf("%d", &senha2);

    //falta colocar um tamanho de minino para senha

    if (strcmp(senha, senha2) == 0){

        printf("Senha registrada com sucesso");

        chamar();

    }else{

        printf("senha incorreta");

    }


}

//código que escolhe as funções

void chamar(){

    int numero;

    printf("\n 1 para o listador \n 2 para a calculadora \n 3 para acabar \n");

    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
    listador();
        break;
    
    case 2:
    calculadora();
        break;
    case 3:
    fim();
        break;
    }

}

//listador de nomes
void listador(){

    int i, quantidade;

    //quantidade de pessoas

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
    void calculadora(){
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

    void fim()
    { 

        printf("Acabou!");
 
    }

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //exemplo: se o usuario digitar 3 o que irá acontecer
    
    int n, pergunta, adicionar, n_2, indice;

    //para definir o tamanho do vetor
    printf("digite o tamanho do vetor: ");
    scanf("%d", &n); //-- digitar aqui

    int n_3 = n+1; //define que o tamanho de n_3(que será usado para passar o tamanho do novo vetor) e o tamanho escolhido pelo usuario mais 1. 
    
    int array[n];
        //array[3]
    
    int array_novo[n_3];
        //array[4]    
    
    printf("array gerado: ");
    
    //gera um array aleatorio com o tamanho definido pelo usuário
    
    for (int i = 0; i < n; i++){
        
        array[i]=rand() % 20 + 1;
        printf(" %d ", array[i]);
        
    }

    //copia os valores para array aleatorio para um novo array(maior) para ser usado na parte de inserção:

    for(int i = 0; i < n; i++){
        
        array_novo[i]=array[i];
        
    }
    
    puts("");

    //grafico
    printf("Digite: 1 para inserção \n 2 para remoção \n 3 para exibição \n 4 para busca de elementos \n 5 para sair");
    scanf("%d", &pergunta);

    do{

        switch(pergunta){

            case 1:
                
            //inserir valor no vetor

            printf("digite uma valor que deseja inserir no vetor: ");
            scanf("%d", &array_novo[n]);
                        //coloca o valor no ultimo indice
    
            printf("array com a inserção: ");
    
            for (int i = 0; i < n_3; i++){
                
                printf(" %d ", array_novo[i]);
                                //0, 1 , 2 , 3 -- que são 4 valores
            }
            

            break;

            case 2:
        
            //remover valor do vetor
            printf("removendo uma valor \n");

            printf("quantos valores ira remover? ");
            scanf("%d", &n_2);

            int remover[n_2];

            for(int i = 0; i<n_2; i++){
                printf("digite o %d° valor para remover \n", i+1);
                scanf("%d", &remover[i]);

            }
           
            for (int i=0; i<n; i++){

            for(int j = 0 ; j < n_2; j++){

            if(array[i]==remover[j]){
                
                array[i]=-1;
                
                    }
            
                }
            }

            // Imprimir elementos que não foram marcados para remoção
            printf("Array após remoção: ");

            for (int i = 0; i < n; i++) {
                if (array[i] != -1) {
                    printf("%d ", array[i]);
                }
            }

            break;


            case 3:

            //mostrar vetor

            printf("mostrando o vetor \n");

            for(int i=0; i<n; i++){
                
                printf(" %d ", array[i]);

            }


            break;
            
            case 4:

            //achar um valor em um vetor
           
            printf("digite um valor: ");
            scanf("%d", adicionar);

            for(int i = 0; i < n; i++)
            {
                
                if(array[i]==adicionar){

                    int pergunta=0;

                    indice=i;

                    break;

                    }else{
                        
                        int pergunta = - 1;
                        
                    }

            }
            
            
            if(pergunta == 0){

                printf("valor encontrado na posião %d", indice);

            }else{

                printf("valor nao encontrado");

            }

            break;
            
            case 5:

            printf("finalizando o programa");

            break;

        }


    }while(pergunta=!5);

}

#include <stdio.h>

int op, numero_1, numero_2, escolha;
    
   int main(){


    num();



   }


   void num(){

    op==1;

    do {
        
        op++;
          
        printf("digite um numero ");
        scanf("%d", &numero_1);
        printf("digite outro numero");
        scanf("%d", &numero_2);


       

        }while(op = 1);
        calculadora();

    }    

    void calculadora(){
   
    do{

        switch (escolha)
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

        
        case 5:
            printf("%d", numero_1 & numero_2);
            break;
       
        printf("digite 0 sair \n ou 1 para  sair");
      
        scanf("%d", &op);
        
         }

     
    }while (op = 0);
    num(); 

    }    
    
 
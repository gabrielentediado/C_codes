#include <stdio.h>

int main(){
  
int pergunta;

  printf("qual exercicio? ");
  scanf("%d", &pergunta);

  
  
  switch(pergunta){

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
  
    case 6:
      exercicio_5();
    break;
  
    case 7:
      exercicio_6();
    break;
  
    case 8:
      exercicio_7();
    break;
  
    case 9:
      exercicio_8();
    break;
  
  }
}


/*
Verificador de Números Primos: Crie um programa que determine se um número fornecido
pelo usuário é primo ou não
*/  
void exercicio_1(){

    int i;
    int numero_1;
    printf("Digite um numero \n");
    scanf("%d", &numero_1); 

    for (i = 2; i < numero_1 / 2; i++);
    
    if (numero_1 % i == 0 && numero_1 != 2){
        
        printf("numero nao primo");
        
    }else{
        
        printf("numero primo");
        
    }
}

/*
Série de Fibonacci: Escreva um programa que gere os primeiros N termos da série de
Fibonacci, onde N é fornecido pelo usuário.
*/
//esse eu quebrei a cabeça, pensei até em fazer com array

void exercicio_2(){
    int n_1=0, n_2=1, c, n;
    
    printf("digite N termos de uma serie fibonnaci \n");
    scanf("%d", &n);
    
    printf("%d ", n_1);

    for(int i=0; i<n; i++){
    
    n_1=n_2; //passa o valor 1 para o 2
    n_2=c; //passa o valor 2 para a soma
    
    c=n_1+n_2; //soma os valores anteriores 
    
    printf("%d ", c);

    //acho que da para fazer com array

  }
}

/*
Conversor de Temperatura: Crie um programa que converta a temperatura de Celsius para
Fahrenheit ou vice-versa, dependendo da escolha do usuário.
*/  

void exercicio_3(){

  int temperatura, medida;
    
     
    printf("qual medida? \n 1 para Celsius \n 2 para Fahrenheit \n");
    scanf("%d", &medida);
    
    printf("digite uma temperatura ");
    scanf("%d", &temperatura);
    
    if(medida==1){
        printf("%d em Fahrenheit: %d", temperatura, (temperatura*9/5)+32);
    }else if(medida == 2){
         printf("%d em Celsius: %d", temperatura, (temperatura-32)*5/9);
    }else
    
  
}

/*

Jogo de Adivinhação: Implemente um jogo de adivinhação onde o programa gera um número
aleatório e o usuário tenta adivinhar. O programa deve dar dicas se o número fornecido pelo
usuário é maior ou menor do que o número gerado

*/

void exercicio_4(){


    int numero, i=0, numero_aleatorio, a=rand() % 10 + 1;

    for (i = 0; i <= a; i++)
    {
       numero_aleatorio = rand() % 10 + 1;
    }
    
    do
    {
        printf("chute um numero entre 1 até 10 ");
        scanf("%d", &numero);

        if (numero < numero_aleatorio){

          printf("Chute um valor maior")

        }else{

          printf("chute um numero menor")

        }
        
    } while (numero != numero_aleatorio);
    printf("acertou");
    


  
}


/*
Média de Números: Escreva um programa que solicite ao usuário quantos números ele deseja
inserir e depois calcule a média desses números.
*/

void exercicio_5(){

  int quant_num, nums;

  printf("digite a quantidade de numeros ");
  scanf("%d", &quant_num);

  for(int i=1; i < quant_num; i++){

    printf("digite o numero %d ", i);
    scanf("%d", &nums);

  }
  
  int somatorio=+nums;

  printf("a media: %d", somatorio/quant_num);

}

/*

Contador de Dígitos: Crie um programa que conte o número de dígitos em um número inteiro
fornecido pelo usuário.

*/

void exercicio_6(){

   int num_1, i;
    
    printf("digite um numero ");
    
    scanf("%d", &num_1);

    for(i = 0; num_1 > 0; i++)
    {
        num_1 /= 10;

    }

 printf("quantidade de digitos: %d ", i);

}

/*

Calculadora de Potência: Peça ao usuário para inserir uma base e um expoente, e calcule a
potência correspondente

*/

void exercicio_7(){

  int base, expoente, mult;

  printf("qual a base? \n");
  scanf("%d", &base);
  printf("qual o expoente? \n");
  scanf("%d", &expoente);

  for(int i = 0; i <= expoente; i++)
  {
    mult= base*base;
  }

  printf("o numero %d com expoente %d\n resulta: %d", base, expoente, mult);

}

/*

Conversor de Moeda: Crie um programa que converta um valor em uma moeda para outra
moeda, com base em taxas de conversão fornecidas pelo usuário.

*/
void exercicio_8(){



    int moeda, taxa;

    print("qual o valor da moeda ");
    scanf("%d", &moeda);

    print("qual o valor da moeda ");
    scanf("%d", &taxa);

    printf("o valor de conversão foi: %d ", moeda*taxa);


}


/*

Cálculo de Média Ponderada: Solicite ao usuário que insira as notas e os pesos
correspondentes, e então calcule a média ponderada.

*/

void exercicio_9{

    int quant_notas, notas, pesos, soma_pesos, multiplicar;
    
    printf("digite a quantidade de notas? ");
    
    scanf("%d", &quant_notas);

    for (int i = 0; i < quant_notas; i++)
    {
        printf("nota numero %d ", i+1);
        scanf("%d", &notas);

        
        printf("peso %d ", i+1);
        scanf("%d", &pesos);

        soma_pesos += pesos;
        multiplicar += notas*pesos;
    }
    

    

    printf("resultado: %d ", multiplicar/soma_pesos);
}

#include<stdio.h>

/*

Main que chama os exercicios

*/

int main(){

    int pergunta;

    printf("digite qual exercicio \n 1, \n 2, \n 3, \n4, \n5, \n6, \n7, \n8, \n9, \n 10");
    scanf("%d", &pergunta);

   switch (pergunta){
   case 1:
     ex_1();
   break;

   case 2:
     ex_2();
   break;
    
   case 3:
     ex_3();
   break;
    
   case 4:
     ex_4();
   break;
    
   case 5:
     ex_5();
   break;
    
   case 6:
     ex_6();
   break;
    
   case 7:
     ex_7();
   break;
    
   case 8:
     ex_8();
   break;

    
   case 9:
     ex_9();
   break;
    
}

    
}

/*
EXERCICIO 1:

Escreva um programa que leia um número inteiro do usuário e imprima se ele é positivo, negativo ou zero.

*/

void ex_1(){

    int numero_1;
    printf("digite um numero");

    if (numero_1 < 0)
    {
        printf("numero negativo");
    }else if(numero_1 > 0){

        printf("numero positivo");
    }else{

        printf("numero 0");        
    }
    
}


/*
EXERCICIO 2 
Crie um programa que leia um número inteiro do usuário e imprima se ele é par ou ímpar
*/
void ex_2(){

    int numero_2;



    if (numero_2 % 2 == 0){


        printf("numero par");
    }else{

        printf("numero impar");

    }

}

/*
EXERCICIO 3 
Escreva um programa que verifique se um ano dado é bissexto ou não
*/
void ex_3(){

    int ano;

    printf("digite um ano");

    scanf("%d", &ano);



    if (ano % 4 == 0 && ano % 100 =! 0 || ano % 400 == 0)
    {

        printf("ano bissexto");

    }else{
        printf("ano não é bissexto");
    }




}

/*
EXERCICIO 4
Leia três números inteiros do usuário e imprima o maior deles.
*/
void ex_4(){

    int numero_3, numero_4, numero_5;


    printf("digite numero 1");
    scanf("d", numero_3);
    printf("digite numero 2");
    scanf("d", numero_4);
    printf("digite numero 3");
    scanf("d", numero_5);

    if(numero_3 > numero_4 && numero_3 > numero_5){

        printf("o primeiro numero maior");
    }
    if (numero_4 > numero_5 && numero_4 > numero_3)
    {
        printf("o segundo maior");

    }else{

        printf("numero 5 maior"); 

    }


}

/*
EXERCICIO 5 

Peça ao usuário quantos alunos há na sala. Em seguida, através de um
laço while, peça ao usuário para inserir as notas de todos os alunos da
sala, um por vez. Por fim, o programa deve calcular e mostrar a média
aritmética da turma

*/


void ex_5(){

  int alunos, i=1;
  float notas, soma;


  printf("quantos alunos?");

  scanf("%d", &alunos);

  while (i <= alunos)
  {
    
    printf("digite a nota do %d aluno: ", i);
    scanf("%f", &notas);

    soma = soma + notas;

    i++;

  }

    printf("a media dos alunos foi: %.2f", soma/alunos);

}

/* 

EXERCICIO 6

Solicite ao usuário os comprimentos dos três lados de um triângulo.
Verifique se esses comprimentos formam um triângulo válido (ou seja, a
soma de quaisquer dois lados deve ser maior que o terceiro lado). */


//só lembrando que os indices de uma array começam no 0. exemplo: (0, 1, 2) têm três indices

void ex_6(){

  int lados[3], cont=1;
  
  int i=0;

  while (i<3)
  {
    printf("digite o lado %d", cont);
    
    scanf("%d", &lados[i]);

    i++;
    cont++;

  }

  if (lados[0] + lados[1] > lados[2] && lados[1] + lados[2] > lados[0] && lados[2] + lados[0] > lados[1])
  {
    printf("triangulo valido");
  }else{
    
    printf("triangulo invalido");

  }
  

}

/* 

EXERCICIO 7

Peça ao usuário seu peso (em kg) e altura (em metros). Calcule o Índice
de Massa Corporal (IMC) e imprima a categoria correspondente (abaixo
do peso, normal, sobrepeso, obeso).

*/

void ex_7() {
    
    float peso, altura, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Categoria: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Categoria: Normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Categoria: Sobrepeso\n");
    } else {
        printf("Categoria: Obeso\n");
    }

    return 0;
}


/* 
Exercício 8:


Peça ao usuário seu peso (em kg) e altura (em metros). Calcule o Índice
de Massa Corporal (IMC) e imprima a categoria correspondente (abaixo
do peso, normal, sobrepeso, obeso).

*/

void ex_8(){

  int Celsius;

  printf("digite um valor em graus Celsius para ser convertido para Fahrenheit: ");

  scanf("%d", &Celsius);

  printf("%d", (9/5) * Celsius + 32);

}
/*

Exercicio 9:

Peça ao usuário um número inteiro positivo e faça uma contagem
regressiva a partir desse número até 1.
*/

void ex_9(){
    
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);


    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
        return ex_8();
    }


    printf("Contagem regressiva:\n");
    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}
/*

EXERCICIO 10:

Solicite ao usuário um número inteiro e imprima a tabuada desse número
de 1 a 10.
*/
int ex_10() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Tabuada do número %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

    

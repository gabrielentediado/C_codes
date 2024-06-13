#include <stdio.h>
#include <string.h>

int preenchido = 0;
char n;

int jogo(char matriz[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("| %c |", matriz[i][j]);
        }
        printf("\n");
    }
}

int jogar(char matriz[3][3]){
    int p, p_2;

    for (int i = 0; i < 3; i++){
        printf("qual coluna? \n");
        scanf("%d", &p);
        printf("em qual linha? \n");
        scanf("%d", &p_2);
        
        p--; // Ajuste para índices começarem em 0
        p_2--; // Ajuste para índices começarem em 0
        
        if (matriz[p][p_2]  == n){
            printf("lugar ocupado \n");
            printf("tente novamente \n");
            jogar(matriz); // Chama a função com a matriz como argumento
        } else {
            matriz[p][p_2] = n;
            preenchido++;
            jogo(matriz);
        }
    }
}

int main(){
    char n_2;
    char matriz[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    printf("escolha entre x ou o: \n");
    scanf(" %c", &n); // Adicionando um espaço antes de %c para limpar o buffer

    if(n == 'x'){
        n_2 = 'o'; 
    } else {
        n_2 = 'x'; 
    }
    
    jogar(matriz); // Passando a matriz como argumento

    return 0;
}

#include <stdio.h>

int main() {//ponto de partida 
    char nome[50];
    float media, soma; //declara a variavel 
    int i;

    for (i = 0; i < 5; i++) {//repetição 
        printf("\nAluno %d\nNome: ", i + 1);//mostra as informações 
        printf("nome, 50, stdin");//mostra os dados 
        
        printf("Media final: ")//mostra as informações
        scanf("%f", &media);//armazena a variavel
        getchar(); // Limpa o buffer
        
        soma += media;
    }

    printf("\nMedia geral da turma: %.2f\n", soma / 5); //mostra a variavel 

    return 0;//encerramento do programa 
}
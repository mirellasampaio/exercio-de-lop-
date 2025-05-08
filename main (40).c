#include <stdio.h>

struct Aluno {//define dados 
    char nome[50];
    float notas[3];
};

int main() {//ponto de partida 
    struct Aluno aluno;
    float soma = 0, media;//declara a variavel 
    int i;
    
    printf("Digite o nome do aluno: ");//mostra a informação
    scanf("%s", aluno.nome);//armazena a variavel 
    printf("Digite as 3 notas:\n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &aluno.notas[i]);
        soma += aluno.notas[i];
    }
    
    media = soma / 3;
    printf("\nNome: %s\n", aluno.nome);// mostra a informação
    printf("Média: %.2f\n", media);
    printf("Situação: %s\n", media >= 7 ? "Aprovado" : "Reprovado");
    
    return 0;//encerramento do programa 
}
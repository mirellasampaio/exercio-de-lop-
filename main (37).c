#include <stdio.h>

struct Aluno {// define os dados 
    char nome[50];
    int idade;//idade
    float nota;//declara a variavel 
};

int main() { //ponto de partida 
    struct Aluno aluno;//define dados 
    printf("Digite o nome do aluno: ");//mostra as informação 
    scanf("%s", aluno.nome);//armazena a variavel 
    printf("Digite a idade: ");//mostra as informações 
    scanf("%d", &aluno.idade);//armazena as informações
    printf("Digite a nota: ");//mostra os dados 
    scanf("%f", &aluno.nota);// armazena as informações
    
    printf("\nDados do aluno:\n"); //mostras as informações 
    printf("Nome: %s\n", aluno.nome);//mostra os dados 
    printf("Idade: %d\n", aluno.idade);//mostra os dados 
    printf("Nota: %.2f\n", aluno.nota);//mostra as informações
    return 0; //encerramento do ´programa 
}
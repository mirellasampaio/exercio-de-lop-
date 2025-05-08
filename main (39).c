   #include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa pessoa1, pessoa2;

    printf("Digite o nome da primeira pessoa: ");//mostrar informação
    scanf("%s", pessoa1.nome);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);// armazenar a variavel 

    printf("\nDigite o nome da segunda pessoa: ");//mostrar informação
    scanf("%s", pessoa2.nome);
    printf("Digite a idade da segunda pessoa: "); 
    scanf("%d", &pessoa2.idade);//armazenar a variavel 

    printf("\n--- Resultado ---\n");
    if (pessoa1.idade > pessoa2.idade) {
        printf("%s eh mais velho(a)\n", pessoa1.nome);
    } else if (pessoa2.idade > pessoa1.idade) {// senão 
        printf("%s é mais velho(a)\n", pessoa2.nome);
    } 

    return 0; //encerramento do programa 
}                            

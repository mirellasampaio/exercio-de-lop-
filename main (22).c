
#include <stdio.h>

int main() { // ponto de partida 
    float nota1, nota2, media; // Declara as variáveis 

    printf("Digite a primeira nota: "); // mostra as informação e os dados 
    scanf("%f", &nota1); // para armazenar a variavel 

    printf("Digite a segunda nota: "); // Mostra uma mensagem pedindo outra nota
    scanf("%f", &nota2); // para armazenar a variavel 

    media = (nota1 + nota2) / 2; //Calculo da media

    //Para dizer  se o aluno está Reprovado ou Aprovado
    if (media >= 7) {
        printf("Está Aprovado: %.2f\n", media); //Se a nota for maior ou igual a 7, esta Aprovado
    } 
    else //Senão ele está Reprovado
    {
        printf("Está Reprovado: %.2f\n", media); // mostra a informação e os dados 
    }

    return 0; // encerramento do programa 
}















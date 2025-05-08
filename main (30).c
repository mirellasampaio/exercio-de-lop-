#include <stdio.h>

int main(){ // ponto de partida 
    float numero, soma, media; //declara a variavel 
    int contador;

    for (contador = 1; contador <= 10; contador++) { // repetição
        printf("Digite o numero: ", contador);// mostra a infomação 
        scanf("%f", &numero); //armazena a variavel 
        soma + numero; 
    }

    // Calcula a média
    media = soma / 10;

    // Exibe o resultado
    printf("A media dos 10 numeros eh: %.2f\n", media);// mostra a informação

    return 0; //encerramento do programa 
}
#include <stdio.h>

int main() {//pnoto de partida 
    int vetor[5];//vetor 

    // Lê os 5 valores do vetor
    printf("Digite 5 valores:\n");//mostra as informações 
    for (int i = 0; i < 5; i++) {//repetição
        printf("Valor %d: ", i + 1);//mostra as informações 
        scanf("%d", &vetor[i]);// armazena as variaveis 
    }

    // Imprime o vetor invertido
    printf("\nVetor invertido:\n");//mostra as informações 
    for (int i = 4; i >= 0; i--) {// repetição 
        printf("%d ", vetor[i]);// mostra as informações 
    }
    printf("\n");// mostra as informações 

    return 0;//encerramento 
}

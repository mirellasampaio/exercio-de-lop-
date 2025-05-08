
#include <stdio.h>

int main() {//ponto de partida
    int n, maior, menor, i;
    printf("Digite 10 numeros:\n");//mostra a informação
    scanf("%d", &n);// armazena a variavel 
    maior = menor = n;
    
    for (i = 1; i < 10; i++) {// repetição
        scanf("%d", &n); //armazena a variavel 
        if (n > maior) maior = n;// verifica a informação 
        if (n < menor) menor = n;// verfica a informação
    }
    
    printf("Maior: %d\nMenor: %d\n", maior, menor);// mostra a informação
    return 0; //encerramento do programa 
}
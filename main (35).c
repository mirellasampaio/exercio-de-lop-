#include <stdio.h>

int main() {//ponto de partida 
    int valores[10];//valores 
    int contador;//contador 

    printf("Digite 10 valores:\n");//mostra as informações 
    for (int i = 0; i < 10; i++) {//repetição 
        printf("Valor %d: ", i + 1);//mostra osdados 
        scanf("%d", &valores[i]);//armazena as informações
    }

    printf("\nNumeros pares encontrados:\n");//mostra os dados 
    for (int i = 0; i < 10; i++) {//repetição 
        if (valores[i] % 2 == 0) {//verifica as informações 
            printf("%d ", valores[i]);//mostra os dados 
            contador++;
        }
    }


    printf("\nQuantidade de numeros pares: %d\n", contador);//mostra as informações

    return 0;// encerramento do programa 
}
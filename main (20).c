#include <stdio.h> 
#include <locale.h>

int main () {      // ponto de partida 
    setlocale(LC_ALL,"");    
    int nume;
    printf("Digite o numero:\n"); //mostra as informações e dados 
    scanf("%d", &nume); // faz a leitura de dados 
    if (nume % 2 == 0) // ele faz a verificação 
    {
        printf("é Par!:\n"); // mostra as informações e dados 
    }
    else  //senão
    {
        printf("É impar!:\n"); // mostra as informações e dados 
    }
    return 0; // encerramento do programa 
}
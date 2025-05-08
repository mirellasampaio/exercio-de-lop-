
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () { // ponto de partida 
    setlocale(LC_ALL,""); //localidade 
    int n, i, tabuada,opcao;
    do { // não tem condição 
    printf("Digite um número para realizar a tabuada: \n");//  mostra a informação
    scanf("%d", &n); // armazena a variavel 
    
    printf("O numero escolhido foi %d\n", n); // mostra os dados 
    for(i=0;i<=10;i++) // repetição
    {
        printf("%d x %d = %d\n",n,i,tabuada = n *i);// mostra a informação 
    }
    printf("Digite 1 para continuar e 0 para sair"); // mostra a informação e os dados 
    scanf("%d", &opcao); //para armazenar a variavel 
    system("clear"); // solicita um serviço do sistema 
    }while(opcao==1); // permite executar 
return 0;    // encerramento do programa 
}









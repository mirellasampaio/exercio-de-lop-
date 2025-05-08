#include <stdio.h>

int main(){ // ponto de partida 
    int idade; 
    printf("Digite sua idade?\n");//mostra a informação 
    scanf("%d", &idade); // armazena a variavel
    if (idade>=18 && idade<=69) // verifica as infromações 
    {
        printf("Seu voto é obrigatório."); //mostra a infromação
    }
    else if (idade<16) //senão
    {
        printf("Não pode votar.");//mostra a informação
    }
    else // senão 
    {
        printf("Voto opcional.");//mostra a informação 
    }
      return 0; 
  }
     
      
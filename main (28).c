#include <stdio.h>
int main(){

    float n1, n2, maior;
    printf("Digite o primeiro número: ");//mostra a informação 
    scanf("%f", &n1); // armazena a variavel 
    printf("Digite o segundo número: "); // mostra a informação 
    scanf("%f", &n2); //armazena a variavel 

    if (n1 == n2) // se digitarem o mesmo numero
    {
    printf("Os números são iguais!\n");
    } else // senão 
    {
    maior = n1;
    if (n2 > maior)
    {
    maior = n2;
    }

    printf("O maior número é: %.f\n", maior); //mostra a informação
    }
    return 0;// encerramento do programa 
}
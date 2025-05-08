#include <stdio.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL,"");// localidade 
  float n1, n2, resultado; // declara as variáveis 
  int operador; // declara uma variavel inteira 
   
   printf ("Escolha a operação\n"); // mostra a informação 
   printf ("1 - Soma\n");// mostra a informação 
   printf ("2 - Subtração\n");// mostra a informação 
   printf ("3 - Multiplicação\n");// mostra a informação 
   printf ("4 - Divisão\n");// mostra a informação 
   scanf ("%d", &operador);// armazena a variavel 
   
   switch(operador)//  trasfere 
  {
      case 1:  // faz a estrutura de programa 
      
          printf("Digite o primeiro numero: ");//mostra a informação
          scanf("%f", &n1);//armazena a variavel 
          printf("Digite o segundo numero: ");// mostra a informação
          scanf("%f", &n2);// armazena a variavel 
          resultado = n1 + n2;  // tem que colocar o resultado 
          printf ("O resultado da soma é: %.f", resultado); // mostra os dados 
          break; // ja pode finalizar a primeira case 
     
     // com isso voce vai repetir o processo até finalizar o programa 
     
     case 2:
     
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 - n2;
          printf ("O resultado da subtração é: %.f", resultado);
          break;
     
     case 3:     
         
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 * n2;
          printf ("O resultado da multiplicação é: %.f", resultado);
          break;
          
     case 4:
     
          printf("Digite o primeiro numero: ");
          scanf("%f", &n1);
          printf("Digite o segundo numero: ");
          scanf("%f", &n2);
          resultado = n1 / n2;
          printf ("O resultado da divisão é: %.f", resultado);
          break;
          
  }
  return 0;
}
    
     // usei o switch porque que a resposta muda de acordo com o numero que o utilizador escolheu, entao o case represneta o numero que vem em frente.
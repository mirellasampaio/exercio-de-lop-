                               
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Criar Um espaço separado
typedef struct{
    char nome[20];
    float preco;
    int quantidade;
}Carrinho;

 int main() {
    
    setlocale (LC_ALL, "");//local
    
    
    //Declarar variaveis e o tipo delas
    int i;
    float total[5];
    Carrinho produtos[5];
    
    
    for (i=0; i<5; i++){
        printf("Informe o nome do produto %d:\n", i+ 1); //mostrar informação
        scanf("%s", produtos[i].nome);//armazenar a variavel
        printf("Informe o preco do produto %d:\n", i+ 1);//mostrar a informação
        scanf("%f", &produtos[i].preco);//armazenar a variavel 
        printf("Informe a quantidade do produto %d:\n", i+ 1);//mostrar os dados 
        scanf("%d", &produtos[i].quantidade); // armazenar as informações 
        getchar (); //ler unico caracter 
        system ("clear"); //sistemas 
    }
    
    //Calcular o preço
     for(i=0; i<5; i++){// reptição 
        total[i]= produtos[i].preco * produtos[i].quantidade;
     }
   
    // total
    for(i=0; i<5; i++){// repetição 
    printf("%s: R$ %.2f\n", produtos[i].nome, total[i]); //mostrar as infromação 
    }
    
    
    return 0;//encerramento do programa 
 }
#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){//ponto de partida 
    setlocale(LC_ALL,"");//local
    
    //Declaração de variavel e o tipo dela;
    int i, n, res=1;
    
    //Pedir número ao usuário e guardar na variavel
    printf("Inisira o número que deseja calcular o fatorial:\n");//mostra as informações
    scanf("%d", &n);//armazena a variavel
    
    //Apagar informações
    system ("clear"); //sistema 
    
    //Calculo
    for (i=1; i<=n; i++){//reptição 
        res= res*i;
    }
    
    //Aparecer resultado na tela
     printf ("O fatorial é : %d", res);//mostra as informações 
     
    
    return 0;//encerramento da programação 
}


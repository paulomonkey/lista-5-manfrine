#include<stdio.h>
#include<stdlib.h>

//nome: Paulo Sérgio Andrade 
//data: 13 / 04 / 2022

/*                  -----08-----
Faça um algoritmo que receba vários números e mostre a quantidade de números
maiores que 5; (do while)
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	
	int num;                                                             // declaração de variaveis do tipo int 
	int fim;                                                             
	int cont = 0;                                                        
	
	do{                                                                  // estrutura de rapetição 
		
		printf("\n Informe um numero: ");                                // saida de dados para pedir ao usario numeros aleatorios
		scanf("%d", &num);                                               // entrada de dados para armazenar os numeros informados pelo usuario
		printf("\n Digite 1 - Continuar \t 0 - Finalizar:  ");           // saida de dados para informar ao usuario como finalizar o programa
		scanf("%d", &fim);                                               // estrada de dados para armazenar a escolha do usuario
		
		if(num > 5) {                                                     // estrurura condiconal, séra executa toda vez que um numero for maior que 5 
		
			cont++;                                                      // contador de numeros maiores que 5 
		}
		
	}while(fim != 0);                                                    // enquanto fim for diferente de 0 zero séra executado estrutura de repetição
	
		printf("\n%d numeros sao maiores que 5", cont);                  // saida de dados para informar a quantidade de numeros são maiores que 5
	
	return 0;
}

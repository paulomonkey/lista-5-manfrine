#include<stdio.h>
#include<stdlib.h>

//nome: Paulo S�rgio Andrade 
//data: 13 / 04 / 2022

/*                  -----08-----
Fa�a um algoritmo que receba v�rios n�meros e mostre a quantidade de n�meros
maiores que 5; (do while)
*/

int main(void) {
	
	system("title desenvolvedor: Paulo S�rgio Andrade");
	
	int num;                                                             // declara��o de variaveis do tipo int 
	int fim;                                                             
	int cont = 0;                                                        
	
	do{                                                                  // estrutura de rapeti��o 
		
		printf("\n Informe um numero: ");                                // saida de dados para pedir ao usario numeros aleatorios
		scanf("%d", &num);                                               // entrada de dados para armazenar os numeros informados pelo usuario
		printf("\n Digite 1 - Continuar \t 0 - Finalizar:  ");           // saida de dados para informar ao usuario como finalizar o programa
		scanf("%d", &fim);                                               // estrada de dados para armazenar a escolha do usuario
		
		if(num > 5) {                                                     // estrurura condiconal, s�ra executa toda vez que um numero for maior que 5 
		
			cont++;                                                      // contador de numeros maiores que 5 
		}
		
	}while(fim != 0);                                                    // enquanto fim for diferente de 0 zero s�ra executado estrutura de repeti��o
	
		printf("\n%d numeros sao maiores que 5", cont);                  // saida de dados para informar a quantidade de numeros s�o maiores que 5
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

//nome: Paulo S�rgio Andrade 
//data: 13 / 04 / 2022

/*                      -----07------
Fa�a um algoritmo para mostra os m�ltiplos de 3 contidos de 1 a 100; (while)
*/

int main(void) {
	
	system("title desenvolvedor: Paulo S�rgio Andrade");
	
	int mult = 1;                                     // declara��o devariavel do tipo int para contar de 1 a 100
	int div;                                          // variavel do tipo int para receber o valor que restar de divis�o de mult por 3
	
	do{                                               // eswtrutura de repeti��o
		
		mult++;                                       // s�ra adcionado 1 a cada vez que repitir o programa
		
		div = mult % 3;                               // variavel div ira receber o valor que restar de divis�o de mult por 3
	
	if(div == 0) {                                    // estrura condicional que s�ra executada toda vez que o resto da div for 0
		
		printf("\nmultiplo de 3: %d", mult);          // saida de dados para informar os multiplos de 3
	}
	
	}while(mult <= 100);                              // enquanto o mult for menor que 100 a estrutura de repeti��o s�ra executada
		 
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

//nome: Paulo Sérgio Andrade 
//data: 13 / 04 / 2022

/*                      -----07------
Faça um algoritmo para mostra os múltiplos de 3 contidos de 1 a 100; (while)
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	
	int mult = 1;                                     // declaração devariavel do tipo int para contar de 1 a 100
	int div;                                          // variavel do tipo int para receber o valor que restar de divisão de mult por 3
	
	do{                                               // eswtrutura de repetição
		
		mult++;                                       // séra adcionado 1 a cada vez que repitir o programa
		
		div = mult % 3;                               // variavel div ira receber o valor que restar de divisão de mult por 3
	
	if(div == 0) {                                    // estrura condicional que séra executada toda vez que o resto da div for 0
		
		printf("\nmultiplo de 3: %d", mult);          // saida de dados para informar os multiplos de 3
	}
	
	}while(mult <= 100);                              // enquanto o mult for menor que 100 a estrutura de repetição séra executada
		 
	return 0;
}

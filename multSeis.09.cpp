#include<stdio.h>
#include<stdlib.h>

//nome: Paulo S�rgio Andrade 
//data; 13 / 04 / 2022

/*                           ------09-------
Desenvolver um algoritmo que efetue a soma de todos os n�meros �mpares que
s�o m�ltiplos de tr�s e que se encontram no conjunto dos n�meros de 15 at� 250
*/

int main(void) {
	
	system("title desenvolvedor: Paulo S�rgio Andrade");     
	
 	int mult = 15;                                           // declara��o do tipo int, atribuindo valor 15 a variavel
	
	do{                                                      // estruta de repati��o para executar at� que varivel "mult" chegue a 250
		
	mult++;                                                  // variavel "mult" recebera 1 acada repeti��o 
	
	if(mult % 2 != 0) {                                      // estrutura condicinal para achar numeros impares 
	                                
	    if(mult % 3 == 0) {                                  // estrutura condicional para achar os impares que s�o multiplus de 3
	   	
	    mult += mult;                                        // mult soma com o novo valor de mult
	   	
	}
}
	
 }while(mult <= 250);                                        // enquanto mult for menor ou igual a 250 a estrura de repeti��o s�ra executada
 
    if (mult % 3 == 0) {                                     // estrutura condicional para comparar a soma dos numeros impares multiplos de 3
			
	    printf("\n Resultado: %d\t", mult);                  // saida de dados para informar o resultado
			
}
 
    printf("\n");                                            
 
	return 0;
}

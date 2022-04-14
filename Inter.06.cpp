#include<stdio.h>
#include<stdlib.h>

//nome: Paulo Sérgio Andrade
//data: 12 /04 / 2022

/*                                      ------06-----
Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: 
[0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar quando for lido um número negativo
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	
	int fim, cont, cont1, cont2, cont3, cont4, cont5;                                         // declaração de variaveis do tipo int 
	
	do{                                                                                       // estrutura de repetição para ser executada a cada vez que o usuariodigitar um numero positivo 
	
	printf("\nInforme numeros positivos e um numero negativo quando quiser finalizar: ");     // saida de dados para pedir os numeros ao usuario
	scanf("%d", &fim);                                                                        // entarda de dados para armazenar o numero digitado pelo usuario 
	 
	cont++;                                                             // variavel do tipo int, com a funão de acrescentar um a cada vez que a estrutura for executada
	 
	if((fim >= 0) && (fim <= 25)) {                                     // estrutura condicional para comparar os numeros digitados pelo usuario 
		cont1++;                                                        // variavel do tipo int, com a funão de acrescentar um a cada vez que a estrutura condicional responder aos requisitos e for executada
	}
	else if((fim >= 26) && (fim <= 50)) {                               // estrutura condicional para comparar os numeros digitados pelo usuario 
		cont2++;                                                        // variavel do tipo int, com a funão de acrescentar um a cada vez que a estrutura condicional responder aos requisitos e for executada
	}
	}	
	else if((fim >= 51) && (fim <= 75)) {                               // estrutura condicional para comparar os numeros digitados pelo usuario 
		cont3++;                                                        // variavel do tipo int, com a funão de acrescentar um a cada vez que a estrutura condicional responder aos requisitos e for executada
	}
	else if((fim >= 76) && (fim <= 100)) {                              // estrutura condicional para comparar os numeros digitados pelo usuario 
		cont4++;                                                        // variavel do tipo int, com a funão de acrescentar um a cada vez que a estrutura condicional responder aos requisitos e for executada
	}
    else{                                                               // estrutura condicional para comparar os numeros digitados pelo usuario 
    	cont5++;                                                        // variavel do tipo int, com a funão de acrescentar um a cada vez que a estrutura condicional responder aos requisitos e for executada
	}
	    
	}while(fim > 0);                                                    // caso o numero digitado pelo usuario for menor que zero, séra finalizado o programa 
	
	printf("\n%d numeros estao no intervalo de 0 a 25.\n", cont1);      // saida de dados para passar as informações ao usuario sobre os numeros que correspondem aos intervalos
	printf("\n%d numeros estao no intervalo de 26 a 50.\n", cont2);     
	printf("\n%d numeros estao no intervalo de 51 a 75.\n", cont3);     
	printf("\n%d numeros estao no intervalo de 76 a 100.\n", cont4);    
		
	return 0;
}


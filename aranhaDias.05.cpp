#include<stdio.h>
#include<stdlib.h>

//nome: Paulo Sergio Andrade
//data: 12 / 04 / 2022

/*         -----05-----
Ao escalar uma parede a aranha escala 20 cm de manhã e a noite ela 
desce 11 cm, em quantos dias a aranha chega ao topo de 18 metros de 
altura.
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	
	float porDia = 9;                                                           // declaraçao de variavel do tipo float para atribuir o valor 9 cm a variavel "porDia"
	int dias = 0;                                                               // declaraçao de variavel do tipo int para atribuir valor a variavel do dias 
	
	dias = 1800/porDia;                                                         // dias vai receber a divisao de 1800 por 9 
	
	printf("\nA aranha levou %d dias para alcanca 18 metros!", dias);           // saida de dados para informar ao usuario 
	
	return 0;
}

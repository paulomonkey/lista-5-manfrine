#include<stdio.h>
#include<stdlib.h>

// Nome: Paulo Sérgio Andrade De Lima Filho
// Data: 09 / 04 / 2022

/*                            --- 01 ---
 O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde 
para dar umaindicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / ( altura )2 Elabore um algoritmo que leia o peso e a altura 
de um adulto e mostre sua condição de acordo com a tabela abaixo. 
IMC em adultos Condição 
Abaixo de 18,5 Abaixo do peso 
Entre 18,5 e 25 Peso normal 
Entre 25 e 30 Acima do peso 
Acima de 30 obeso 
(print e anexe o resultado provando que foi você que fez - Seu nome deve aparecer 
em qualquer parte da questão).
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	
	float imc, peso, altura;                                   // Declaração das variaveis
	   
	printf("\nInforme sua altura: ");                          // saida de dados para pedir altura do usuario
	scanf("%f", &altura);                                      // entrada de dados da altura do usuario
	printf("\nInforme seu peso: ");                            // saida de dados para pedir o peso do usuario                   
	scanf("%f", &peso);                                        // endrade de dados do peso do usuario
	
	imc = peso / (altura * altura);                            // formula para calcular o IMC do usuario
	
	if(imc < 18.5) {                                           // estrutura condical para comparar o IMC do usuario e saber se ele ésta abaixo do peso
		printf("\nVoce esta abaixo do peso ");                 // saida de dados para informa ao usuario sua condição atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	else if((imc >= 18.5)&&(imc < 25)) {                       // estrutura condical para comparar o IMC do usuario e saber se ele ésta no peso normal
		printf("\nVoce esta no peso normal ");                 // saida de dados para informa ao usuario sua condição atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	else if((imc >= 25)&&(imc < 30)) {                         // estrutura condical para comparar o IMC do usuario e saber se ele ésta acima do peso
		printf("\nVoce esta acima do peso ");                  // saida de dados para informa ao usuario sua condição atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	else{                                                      // estrutura condical para comparar o IMC do usuario e saber se ele ésta em nivel de obesidade
		printf("\nVoce esta em nivel de obesidade ");          // saida de dados para informa ao usuario sua condição atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	
	return 0;
}

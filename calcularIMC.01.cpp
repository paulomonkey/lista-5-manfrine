#include<stdio.h>
#include<stdlib.h>

// Nome: Paulo S�rgio Andrade De Lima Filho
// Data: 09 / 04 / 2022

/*                            --- 01 ---
 O IMC � Indice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de 
para dar umaindica��o sobre a condi��o de peso de uma pessoa adulta.
A f�rmula � IMC = peso / ( altura )2 Elabore um algoritmo que leia o peso e a altura 
de um adulto e mostre sua condi��o de acordo com a tabela abaixo. 
IMC em adultos Condi��o 
Abaixo de 18,5 Abaixo do peso 
Entre 18,5 e 25 Peso normal 
Entre 25 e 30 Acima do peso 
Acima de 30 obeso 
(print e anexe o resultado provando que foi voc� que fez - Seu nome deve aparecer 
em qualquer parte da quest�o).
*/

int main(void) {
	
	system("title desenvolvedor: Paulo S�rgio Andrade");
	
	float imc, peso, altura;                                   // Declara��o das variaveis
	   
	printf("\nInforme sua altura: ");                          // saida de dados para pedir altura do usuario
	scanf("%f", &altura);                                      // entrada de dados da altura do usuario
	printf("\nInforme seu peso: ");                            // saida de dados para pedir o peso do usuario                   
	scanf("%f", &peso);                                        // endrade de dados do peso do usuario
	
	imc = peso / (altura * altura);                            // formula para calcular o IMC do usuario
	
	if(imc < 18.5) {                                           // estrutura condical para comparar o IMC do usuario e saber se ele �sta abaixo do peso
		printf("\nVoce esta abaixo do peso ");                 // saida de dados para informa ao usuario sua condi��o atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	else if((imc >= 18.5)&&(imc < 25)) {                       // estrutura condical para comparar o IMC do usuario e saber se ele �sta no peso normal
		printf("\nVoce esta no peso normal ");                 // saida de dados para informa ao usuario sua condi��o atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	else if((imc >= 25)&&(imc < 30)) {                         // estrutura condical para comparar o IMC do usuario e saber se ele �sta acima do peso
		printf("\nVoce esta acima do peso ");                  // saida de dados para informa ao usuario sua condi��o atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	else{                                                      // estrutura condical para comparar o IMC do usuario e saber se ele �sta em nivel de obesidade
		printf("\nVoce esta em nivel de obesidade ");          // saida de dados para informa ao usuario sua condi��o atual
		printf("\nIMC: %.2f", imc);                            // saida de dados para informa ao usuario o seu IMC
	}
	
	return 0;
}

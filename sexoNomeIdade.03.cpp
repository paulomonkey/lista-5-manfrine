#include<stdio.h>
#include<string.h>

//nome: Paulo S�rgio
//data: 09 / 04 / 2022

/*            ----03----
Criar um algoritmo para entrar com nome, sexo e idade de uma pessoa. Se a 
pessoa for do sexo feminino e tiver menos que 25 anos, imprimir o nome e a 
mensagem: ACEITA. Caso contr�rio, imprimir nome e mensagem: N�O 
ACEITA. (considerar � f � ou �F� ).
*/

int main (void) {
	
	system("title desenvolvedor: Paulo S�rgio Andrade");
	
	char nome[30];                                                     // declara��o de variavel do tipo string nome
	char str1[9] = "Feminino";                                         // declara��o de variavel do tipo string para sexo com F maiusculo
	char str2[9] = "feminino";                                         // declara��o de variavel do tipo string para sexo com f minusculo
	char sexo[9];                                                      // declara��o de variavel do tipo string para o sexo 
	int idade, retorno;                                                // declara��o de variavel do tipo inteiro para idade  
	
	printf("\nInforme seu nome: ");                                    // saida de dados para pedir o nome do usuario
	fgets(nome, 30, stdin);                                            // entrada de dados (nome do usuario)
	printf("\nInforme seu sexo: ");                                    // saidade de dados para pedir o sexo do usuario
	fgets(sexo, 9, stdin);                                             // entrada de dados (sexo do usuario)
	printf("\nInforme sua idade: ");                                   // saidade de dados para pedir a idade do usuario
	scanf("%d", &idade);                                               // entrada de dados (idade do usuario)
	
	retorno = strcmp(sexo,str1);                                       // s�ra atribuido a variavel "retorno" o valor da compara��o das strings 
	 
	if(retorno == 0) {                                                 // estrutura condicinal para comparar "retorno" com 0 
		if(idade <= 25) {                                              // estrura de repeti��o para comparar a idade do usuario e saber se tem menos de 25 anos
			printf("\nvoce foi aceita!");                              // saida de dados para informar ao usuario que foi aceito !
		}
		else{                                                          // caso a idade n�o corresponda aos requisitos 
			printf("\nvoce nao foi aceita!");                          // saida de dados para informar que o usuario n�o foi aceito
		}
	}
	if(retorno != 0) {                                                 // estrura condicinal caso o compara��o das strings derem um valor diferente de 0
		
		retorno = 0;                                                   // zerando o valor de da variavel "retorno"
		retorno = strcmp(sexo,str2);                                   // s�ra atribuido a variavel "retorno" o valor da compara��o das strings 
		
		if(retorno == 0) {
		if(idade <= 25) {                                              // estrutura condicinal para comparar "retorno" com 0 
			printf("\nvoce foi aceita!");                              // saida de dados para informar ao usuario que foi aceito !
		}
		else{                                                          // caso a idade n�o corresponda aos requisitos 
			printf("\nvoce nao foi aceita!");                          // saida de dados para informar que o usuario n�o foi aceito
		}
		}
    }
    if(retorno != 0) {                                                 // estrura condicinal para o caso o sexo nao correponda aos requisistos necessarios para o teste 
    	printf("\nVoce nao corresponde aos requisistos necessarios!"); // saida de dados informando que o usuario nao corresponde as caracteristicas necessarias 
	}
	
	return 0;
}

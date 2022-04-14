#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// nome: Paulo Sérgio Andrade De Lima Filho
// data: 09 / 04 / 2022

/*                       -----02-----
Criar um algoritmo para ler a sigla de um estado de uma pessoa e imprimir uma 
das mensagens: 
- Carioca; - Paulista; - Amazonense; - outros estados.
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	
	char str1[3] = "RJ";                                          // declaração de variavel do tipo String para sigla da cidade Rio De Janeiro
	char str2[3] = "SP";                                          // declaração de variavel do tipo String para sigla da cidade São Paulo
	char str3[3] = "AM";                                          // declaração de variavel do tipo String para sigla da cidade Amazonas
	char sigla[3];                                                // declaração de variavel do tipo String para sigla da cidade que o usuario ira digitar
	int retorno;                                                  // declaração de variavel do tipo inteiro receber o retorno da comparação entre a string sigla e as strings str
	
	printf("\nInforme a sigla do seu estado: ");                  // saida de dados para pedir que o usuario informe a sigla da sua cidade 
	fgets(sigla, 3, stdin);                                       // entrada de dados da sigla da cidade do usuario
	
	retorno = strcmp(sigla,str1);                                 // calculo que compara as strings e atribui o valor a varuavel "retorno"
	
	
	if(retorno == 0) {                                            // estrutura condicional para vérificar se as strings são iguais 
			printf("\nVoce eh Carioca !");                        // saida de dados para informar sua naturalidade 
		}
	
	if (retorno != 0) {                                           // estrutura condicinal para zerar o valor de "contador" e atribuir um novo valor 
		
		retorno = 0;                                              // zerando o valor da variavel "contador"
		retorno = strcmp(sigla,str2);                             // atribuando um novo valor a varvel "retorno" fazendo uma nova compração de strings 
		
		if(retorno == 0) {                                        // essa estrutura condicial séra executada se a estrura condicial anterior for validada
			printf("\nVoce eh Paulista !");                       // saida de dados para informar sua naturalidade 
		}
	}
    if (retorno != 0) {                                           // estrutura condicinal para zerar o valor de "contador" e atribuir um novo valor 
		
		retorno = 0;                                              // zerando o valor da variavel "contador"
		retorno = strcmp(sigla,str3);                             // atribuando um novo valor a varvel "retorno" fazendo uma nova compração de strings 
		
		if(retorno == 0) {                                        // essa estrutura condicial séra executada se a estrura condicial anterior for validada
			printf("\nVoce eh Amazonense !");                     // saida de dados para informar sua naturalidade 
		}
	}
	if(retorno != 0) {                                            // essa estrutura de repetição séra executada caso a sigla digitada pelo usuario não tiver sido declarada 
			printf("\nsua sigla nao esta cadastrada !");          // saidade de dados para informar ao usuario que a sigla digitada por ele não foi declarada no algoritimo
		}
	
	return 0;
}

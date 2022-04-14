#include<stdio.h>
#include<stdlib.h>

//nome: Paulo Sérgio Andrade
//data: 10 / 04 / 2022

/*                        ----04----
Crie um algorítmo que armazene dados de produtos a serem vendidos. O 
usuário deve escolher quais produtos deseja comprar, no final deve mostrar o 
ou os produtos escolhidos, além de mostrar seus valores e o preço final, o 
pagamento e o troco. (print e anexe o resultado provando que foi você que fez).
*/

int main(void) {
	
	system("title desenvolvedor: Paulo Sérgio Andrade");
	//Declaração das variaveis
    int produtos, quantidade, cont, fimTroco;                                                                                                                                // Variaveis do tipo int                                                                                                                                   
	float leite = 10, sabaoEmPo = 4.50, farinha = 7.50, arroz = 5, feijao = 8.50;                                                                                            // Variaveis dos produtos atribiando valor   
	float aguaSanitaria = 4.50, sabaoEmBarra = 3.50, escovaDeDentes = 2.50, frango = 19, sabonete = 1.50;                                                                      
	float nunLeite = 0, nunSabaoPo = 0, nunFarinha = 0, nunArroz = 0, nunFeijao = 0, nunAgua = 0, nunSabao = 0, nunEscova = 0, nunFrango = 0, nunSabonete = 0;               // variaveis para a quantidade de prudutos
	float valorTotal, valorProdutos, valorPago, troco;                                                                                                                         
	// Saida de dados para mostrar aos usuario a lista dos produtos e seus valores
	printf("\n\tLISTA DE PRODUTOS\t\t\n");                                                                                                                                     
	printf("\nPRODUTOS:\t\t\tVALORES:\n\n");                                                                                                                                  
	printf(" 1 - LEITE\t\t\t   R$10\n 2 - SABAO EM PO\t\t   R$4,50\n 3 - FARINHA\t\t\t   R$7,50\n 4 - ARROZ\t\t\t   R$R$5\n 5 - FEJAO\t\t\t   R$8,50\n");                      
	printf(" 6 - AGUA SANITARIA\t\t   R$4,50\n 7 - SABAO EM BARRA\t\t   R$3,50\n 8 - ESCOVA DE DENTES\t\t   R$2,50\n 9 - FRANGO\t\t\t   R$19\n 10 - SABONETE\t\t\t   R$1,50"); 

	
	do{	                                                                                                                    // estrura de repeticção
	                                                                                                                                                    
	printf("\n\n\tInforme o numero correspondente ao produto que voce deja comprar: ");                                     // saida de dados para pedir ao usuario que escolha um numero correspondente ao produto que le deseja
	scanf("%d", &produtos);                                                                                                 // entrada de dados para armazenar o valor escolido pelo usuario
	
	switch(produtos) {                                                                                                      // estrura condicional
		case 1:                                                                                                             // case correspodera ao numero digitado pelo usuario abaixo tem as outras alternativas
		printf("\n\tQuantos voce deja levar ?: ");                                                                          // saida de dados para perguntar a quantidade que o usuario pretende levar do produto escolido
		scanf("%d", &quantidade);                                                                                           // entrada de dados para armazenar o valor da quantidade
		
		nunLeite = quantidade * leite;                                                                                      // A variavel "nunLeite" ira receber o valor da multiplicação entre quantidade e valor de leite
		valorTotal = nunLeite;                                                                                              // A variavel "valorTotal" ira receber o valor de "nunLeite" e de todas as outras escolhas que o usuario ira fazer
		
		break;
		case 2:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunSabaoPo = quantidade * sabaoEmPo;
		valorTotal = nunSabaoPo;
		
		break;
		case 3:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunFarinha = quantidade * farinha;
		valorTotal = nunFarinha;
		
		break;
		case 4:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade); 
		
		nunArroz = quantidade * arroz;
		valorTotal = nunArroz;
		
		break;
		case 5:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunFeijao = quantidade * feijao;
		valorTotal = nunFeijao;
		
		break;
		case 6:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunAgua = quantidade * aguaSanitaria;
		valorTotal = nunAgua;
		
		break;
		case 7:
		printf("\n\tQuando voce desa levar ?: ");
		scanf("%d", &quantidade);
		
		nunSabao = quantidade * sabaoEmBarra;
		valorTotal = nunSabao;
		
		break;
		case 8:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunEscova = quantidade * escovaDeDentes;
		valorTotal = nunEscova;
		
		break;
		case 9:
		printf("\n\tQuantos voce deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunFrango = quantidade * frango;
		valorTotal = nunFrango;
		
		break;
		case 10:
		printf("\n\tQuantos vc deja levar ?: ");
		scanf("%d", &quantidade);
		
		nunSabonete = quantidade * sabonete;
		valorTotal = nunSabonete;
		
		break;
	}
	
	valorProdutos += valorTotal;                                                                                             // séra atrubido a variavel "valorProdutos" o valor da variavel "valorTotal" a cada repetição
	
	printf("\n\tVoce deseja comprar outro produto ?");                                                                       // saida de dados para perguntar ao usuario se el deja escolher outro produto
	printf("\n\n\tDigite 1 - sim \t 2 - nao: ");                                                                             // saidade de dados para informar ao usuario o valor a ser digitado para cada ação
	scanf("%d", &cont);                                                                                                      // entrada de dados para armazenar o valor da escolha feita pelo usuario
	
  }while(cont == 1);                                                                                                         // enquanto variavel "cont" for igua um séra executada a estrutura de repetição
  
  printf("\n\n\t-----PRODUTOS COMPRADOS ------");                                                                            // saida de dados 
  
  if(nunLeite > 0) {                                                                                                         // estrutura de repetiçaõ para sabermos se o usuario escolheu o produto
  	
  	printf("\n\n\tLeite\t\t\tvalor:R$%.2f", nunLeite);                                                                       // saida de dados para informar o produto escolido por ele e seu valor 
  	
  }
  if(nunSabaoPo > 0) {
  	
  	printf("\n\n\tSabao em po\tvalor:R$%.2f",nunSabaoPo);
  	
  }
  if(nunFarinha > 0) {
  	
  	printf("\n\n\tFarinha\t\t\tvalor:R$%.2f", nunFarinha);
  	
  }
  if(nunArroz > 0) {
  	
  	printf("\n\n\tArroz\t\t\tvalor:R$%.2f", nunArroz);
  	
  }
  if(nunFeijao > 0) {
  	
  	printf("\n\n\tFeijao\t\t\tvalor:R$%.2f",nunFeijao);
  	
  }
  if(nunAgua > 0) {
  	
  	printf("\n\n\tAgua Sanitaria\tvalor:R$%.2f", nunAgua);
  	
  }
  if(nunSabao > 0) {
  	
  	printf("\n\n\tSabao em barra\tvalor:R$%.2f", nunSabao);
  	
  }
  if(nunEscova > 0) {
  	
  	printf("\n\n\tEscova de dentes\t\t\tvalor:R$%.2f",nunEscova);
  	
  }
  if(nunEscova > 0) {
  	
  	printf("\n\n\tFrango\t\t\tvalor:R$%.2f", nunEscova);
  	
  }
  if(nunSabonete > 0) {
  	
  	printf("\n\n\tSabonete\t\t\tvalor:R$%.2f", nunSabonete);
  	
  }
  
  printf("\n\t-----------------------------");                                                                                 
  
  printf("\n\n\tValor total das compras: R$%.2f", valorProdutos);                                                              // saida de dados para informar o valor total das compras
  
  do{                                                                                                                          // estrutura de repetição 
  	
  printf("\n\n\tInforme o quanto voce tem a pagar: ");                                                                         // saida de dados para pedir que o usuario informe o valor que le ira pagar as compras
  scanf("%f", &valorPago);                                                                                                     // entrada de dados opara armazenar o valor
  
  if(valorPago > valorProdutos) {                                                                                              // estrura condicional caso o valor pago seja maior que o valor aser pago
  	
  	troco = valorPago - valorProdutos;                                                                                         // A variavel "troco" recebera o valor da subtração entre a variavel "valorPago" e "valorProdutos"
  
  printf("\n\tseu troco: R$%.2f", troco);                                                                                      // saida de dados para informar o troco 
  	
  }
  else if(valorPago < valorProdutos) {                                                                                         // estrura de repetição que séra executado se valorPago for menor que valorProdutos
  	
  	printf("\n\tO valor informado eh menor que o valor do produtos comprados!!!\n");                                           // saida de dados para informar que o valor pago pelo usuario é menor que o valor dos produtos comprados
  	printf("\n\tdeseja informar outro valor ?\n");                                                                             // saida de dados perguntar ao usuario se ele deseja informar outro valor
  	printf("\n\tDigite:  1 - sim\t2 - nao: ");                                                                                 // saida de daos para informar o valor correspondente a ação que le deseja executar
  	scanf("%d", &fimTroco);                                                                                                    // estrada de dados para armazenar o valor da escolha 
  }
  else{                                                                                                                        // caso nenhuma das ações acima seja executada  
  	
  	printf("\n\t!!produtos foram pagos!!, tenha uma boa semana");                                                              // saida de dados para informar ao usuario que produtos foram pagos
  	
  	fimTroco = 3;                                                                                                              // atribuindo valor 3 a variavel "fimTroco" para finalizar a estrutura de repetção
  	
  }
}while(fimTroco == 1);                                                                                                         // enquanto o valor da variavel "fimTroco" for 1 séra executado a estrutura de repetição

    if(fimTroco == 2) {                                                                                                        // estrutura condicional caso ele digite 2
     	
     	printf("\n\n\tAs compras nao podem ser efetudas !!");	                                                               // saida de dados informando que as compras não podem ser afetuadas
	 }
  
	return 0;
}



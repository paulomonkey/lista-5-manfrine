#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

//nome: Paulo Sérgio Andrade 
//data; 13 / 04 / 2022

/*                           ------10-------
Crie um algorítmo que aplique pelo menos 2 funções e 1 procedimento criado 
por você. (questões idênticas serão anuladas) (print e anexe o resultado 
provando que foi você que fez).
*/

void entrarGame(void);
void loginGame(void);
int main(void) {
	
	int escolha;
	
	printf("\n\n\t------DIGITE O NUMERO CORRESPONDENTE AO QUE VOCE DESEJA FAZER---\n");
	printf("\n\t1 - Entrar.........\n\t2 - Fazer Login....");
	printf("\n\n\t----------------------------------------------------------------\n\t:");
	scanf("%d", &escolha);
	
	if(escolha == 1) {
		
		entrarGame();
		
	}
	else if(escolha == 2) {
		
		loginGame();
		
	}
	
	return 0;
}
void entrarGame(void) {
	
	int senha = 7410;
	
	printf("\n\tNome Usuario: Volk ");
	
	printf("\n       \tSenha: ");
	scanf("%d", &senha);
	
	if(senha == 7410) {
		for(int i = 0; i <= 100; i++) {
    	
		system("cls");
		printf("\aCARREGANDO JOGO, AGUARDE... %d%%\n", i);
		Sleep(0.10);
		
	}
	printf("\n\n\t\tJOGAR\n\n");
	}
	else{
		printf("\n\n\tVOCE PRECISA FAZER LOGIN !!!!!");
	}
}
void loginGame(void) {
	
	int senha;
	
	printf("\n\tOla! USUARIO TEMPORARIO");
	printf("\n\tinforme uma senha: ");
	scanf("%d", &senha);
	
	if(senha > 1000) {
		
		printf("\n\n\tPARABENS SEU CADASTRO FOI CONCLUIDO !!!!");
	}

}

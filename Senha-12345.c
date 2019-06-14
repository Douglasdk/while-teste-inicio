#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int erro = 0, senha; 
	
	while (erro < 3){
		
		
		printf("Digite a senha correta para acessar \n");
		scanf("%d", & senha);
		
		
		if (senha == 12345 ){
			
			printf ("Senha correta, acesso liberado");
			
			erro = 3;
		}
		else {
		
			printf("Senha invalida \n");
			
}
		erro ++;
	}
	
	
	
	
	
	
	return 0;
}

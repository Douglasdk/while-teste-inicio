#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int contador = 0, sex;
	float alt,pesoh,pesom;
	
	
	while (contador < 15){
		
		printf("Escolha a opção : \n 1 Masculino \n 2 Feminino \n");
		scanf("%d", & sex);
		printf("Digite a altura \n");
		scanf("%f", & alt);
		
		if ( sex == 1){
			pesoh = (72.7 * alt)-58;
			printf("Seu peso ideal e: \n %f ", pesoh);
		}
		else {
			pesom = (62.1 * alt)-44.7;
			printf("Seu peso ideal e: \n %f ", pesom);	
			
		}
		contador ++;
		
		
	}
	
	system ("PAUSE");
	
	
	return 0;
}

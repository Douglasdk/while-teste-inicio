#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main(int argc, char *argv[]) {
	
	float base,alt,area;
	int sair;
	
	
	
	printf("\n Cauculo da area do retangulo");
	printf("\n Digite o valor da largura \n ");
	scanf("%f",&base);
	printf("\n Digite o valor da altura \n");
	scanf("%f",&alt);
	area=base*alt;
	printf("\nO valor da area e: %f \n",area);
	printf("\n Digite 1 para continuar ou 0 para sair \n");
	scanf("%d",&sair);
	
	while(sair==1){
		
	area=base*alt;
	printf("O valor da area e: %f",area);
	
	}
	
	return 0;
	System("PAUSE");
}
		


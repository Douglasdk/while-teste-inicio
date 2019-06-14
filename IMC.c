#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main(int argc, char *argv[]) {
	
	int sair = 1;
	float imc,alt,peso;
	
	while(sair!=0){
	
		

	printf("Cauculo do IMC\n");
	printf("\n Digite a altura (metros) \n ");
	scanf("%f",&alt);
	printf("\n  Digite o peso (Kilograma) \n");
	scanf("%f",&peso);
	
	imc=peso/pow (alt,2);

	if (imc >= 1){
		
		if(imc < 18){
			
			printf("Magreza \n");
			
		}
		
		else if(imc > 18 && imc < 25){
			
			printf("Saudavel \n");
		}	
	
		else if(imc > 25 && imc < 30){
			
			printf("Sobrepeso \n");
			
		}	
		 
		else if(imc >=30 ) {
			printf ("Obesidade \n");
		}
				
			printf("Digite 0 para sair /n");
		scanf("%d",&sair);
	
		
		
		
	}
	
	else 

	
	if (sair == 0) {
		
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	System("PAUSE");
}
	

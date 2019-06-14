#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int contador = 1;
	float md,b1,b2,b3,b4;
	
	while(contador <= 7){
	
	
	printf("Digite a nota do primeiro bimestre \n");
	scanf("%f",&b1);
	printf("Digite a nota do segundo bimestre \n");
	scanf("%f",&b2);
	printf("Digite a nota do terceiro bimestre \n");
	scanf("%f",&b3);
	printf("Digite a nota do quarto bimestre \n");
	scanf("%f",&b4);
	
	
	md = ( b1 + b2 + b3 + b4 )/4;
	
	printf ("a media do aluno e: \n %f", md);
	printf ("\n");

 	system("PAUSE");
	 contador ++;
}
	
	return 0;
}

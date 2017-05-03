#include <stdio.h>
#include <stdlib.h>


int main(){

	int dia;
	
	printf("Digite o numero do dia da semana: ");
	scanf("%d",&dia);

	switch(dia){
		case 1:
			printf("Segunda-Feira\n");
			break;
		case 2:
			printf("Terca-Feira\n");
			break;
		case 3:
			printf("Quarta-Feira\n");
			break;
		case 4:
			printf("Quinta-Feira\n");
		case 5:
			printf("Sexta-Feira\n");
			break;
		case 6:
			printf("Sabado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
		default:
			printf("Dia Invalido!\n");
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

	int resultado;
	printf("Bob esponja passou no teste (Sim -1 / Nao - 0):");
	scanf("%d",&resultado);

	if(resultado==1){
		printf("Parabéns!\n");
	}else{
		printf("Volte para a escola de pilotagem!\n");
	}


	return 0;
} 
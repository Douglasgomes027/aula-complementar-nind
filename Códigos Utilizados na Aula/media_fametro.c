#include <stdio.h>
#include <stdlib.h>

int main(){
	// APROVADO - MEDIA >= 7
	// AF - >=4 e < 7
	// REPROVADO - <4
	// REPROVADO >= 5 faltas

	float ap1,ap2,media;
	int falta;

	printf("Digite a nota da AP1: ");
	scanf("%f",&ap1);

	printf("Digite a nota da AP2: ");
	scanf("%f",&ap2);

	printf("Digite o número de faltas(dias): ");
	scanf("%d",&falta);

	media= (ap1+ap2)/2;

	if(falta>=5){
		printf("Aluno Reprovado por falta! faltas = %d\n",falta);
	}else{
		if(media>=7){
			printf("Aluno Aprovado! Media: %.1f\n",media);
		}else if(media>=4){
			printf("Aluno de AF! Media: %.1f\n",media);
		}else{
			printf("Aluno Reprovado! Media %.1f\n",media);
		}
	}

	return 0;
}
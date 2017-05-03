#include <stdio.h>
#include <stdlib.h>
// Programa que compara dois numeros usando ==, > or <
int main(){

	    int n1, n2;
	    printf("Digite o 1 número: ");
	    scanf("%d",&n1);
	    printf("Digite o 2 número: ");
	    scanf("%d",&n2);

	    
	    if(n1 == n2){
	        printf("%d = %d\n",n1,n2);
	    }
		else if (n1 > n2){
	        printf("%d > %d\n",n1,n2);
	    }	    
	    else{
	        printf("%d < %d\n",n1,n2);
	    } 	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, numeroReverso = 0, resto;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(n != 0)
    {
        resto = n%10;
        numeroReverso = numeroReverso*10 + resto;
        n /= 10;//n = n/10 
    }

    printf("Número Reverso = %d \n", numeroReverso);

    return 0;
}
// Programa para calcular a soma de no máximo 5 números Pares

# include <stdio.h>
int main()
{
    int i,numero,soma=0;

    for(i=1; i <= 5; i++)
    {
        printf("Digite o %d numero : ",i);
        scanf("%d",&numero);

        // Se o numero for impar não será somado
        if(numero%2==1)
        {
            continue;
        }

        soma += numero; // soma = soma + numero;
    }

    printf("Soma do número pares = %d\n",soma);
    
    return 0;
}
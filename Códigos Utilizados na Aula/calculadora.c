#include <stdio.h>
#include <stdlib.h>

int main() {

    // Calculadora usando o operador switch case
    char operador;
    float n1,n2;
    
    printf("Digite o operador (+, -, *, /): ");
    scanf("%c", &operador);   

    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);

    printf("Digite o segundo numero: ");
    scanf("%f",&n2);

    //getchar();Esse getchar() sem atribuição lê o [Enter], pois sem ele o enter é atribuido á variavel operador
     

    switch(operador)
    {
        case '+':
            printf("%.1f + %.1f = %.1f\n",n1, n2,(n1+n2));
            break;

        case '-':
            printf("%.1f - %.1f = %.1f\n",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1f * %.1f = %.1f\n", n1, n2, (n1*n2));
            break;

        case '/':
            printf("%.1f / %.1f = %.1f\n",n1, n2, (n1/n2));
            break;

        // operador diferente(+, -, *, /)
        default:
            printf("Operador Incorreto!\n");
    }
    
    return 0;
}
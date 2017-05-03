#include <stdio.h>
#include <stdlib.h>
int main(){
    char c;
    int vogalMinuscula, vogalMaiuscula;

    printf("Digite um letra do alfabeto: ");
    scanf("%c",&c);

    // retornara 1 (true) se a vogal for minuscula
    vogalMinuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // retornara 1 (true) se a vogal for maiuscula
    vogalMaiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (vogalMinuscula || vogalMaiuscula)
        printf("%c é uma vogal\n", c);
    else
        printf("%c é uma consoante\n", c);
    return 0;
}
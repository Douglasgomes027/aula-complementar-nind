#include <stdio.h>
int main()
{
    int i, j, linhas;

    printf("Digite o número de linhas: ");
    scanf("%d",&linhas);

    for(i=1; i<=linhas;i++)
    {
        for(j=1; j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
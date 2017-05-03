#include <stdio.h>
#include <stdlib.h>
#define NAME "Pedro"
#define Y 10

int main()
{
    int x = 10;
   	
    x=15;// valor vai variar	
    //Y=10;//erro de compilacao

    printf("x = %d\n",x);
    printf("y = %d\n",Y);
    printf("name = %s\n",NAME);
    return 0;
}

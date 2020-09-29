#include <stdio.h>

int main()
{
    int x,
        y,
        tmp;

    printf("x =  ");
    scanf("%d", &x);

    printf("y =  ");
    scanf("%d", &y);

    printf("Trocando os valores de x e y");

    tmp = x;
    x = y ;
    y = tmp;

    printf("\nx = %d \ny = %d\n",x,y);

}


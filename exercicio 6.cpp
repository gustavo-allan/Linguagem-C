#include <stdio.h>

int main()
{
    int dia,
        mes,
        ano;

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Mes: ");
    scanf("%d", &mes);

    printf("Ano: ");
    scanf("%d", &ano);


    if((dia < 1) || (dia > 31))
        printf("Dia invalido\n");
    else
	 if( (mes < 1) || (mes > 12) )
        printf("Mes invalido\n");   
     else 
      if( ano > 2020 )
        printf("Ano invalido\n");
     else 
        printf("Data valida\n");


}


#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main ()
{
	float raio=0;
	
	printf("\n digite o raio da circunferencia: ");
	scanf("%f", &raio);
	
	printf("\n digite a area da circunferencia e= %0.2f", pi*(raio*raio));
	system("pause");
	
	return 0;
}

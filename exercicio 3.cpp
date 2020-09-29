#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	
	int num;
	
	printf("digite o numero: ");
	scanf("%d", &num);
	
	if(num %2 == 0){
		printf("o numero e par: ");
	}
	else{
		printf("o numero e impar: ");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

    int main(){
	int idade;
	
	printf(" digite sua idade: ");
	scanf( "%d", &idade);
	
	if(idade<18 || idade>67){
		printf("voce nao pode doar sangue: ");
	}
	else{
		printf("voce pode doar sangue: ");
	}
	return 0;
	
}

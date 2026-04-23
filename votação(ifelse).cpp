#include <stdio.h>

int main (){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if (idade>=16){
		printf("Pode votar!\n");
	}else{
		printf("Não pode votar!\n");
	}
	return 0;
}
